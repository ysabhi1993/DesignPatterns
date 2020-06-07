#ifndef OPEN_CLOSED_H
#define OPEN_CLOSED_H

#include <vector>
#include <string>

enum Color{red, green, blue};
enum Size{small, medium, large};

struct Product {
    std::string name;
    Color color;
    Size size;
};

template <typename T> struct AndSpecification;

template <typename T> struct Specification {
    virtual bool is_satisfied(T*) const = 0;
};

template <typename T> AndSpecification<T> operator&&(const Specification<T> &first, const Specification<T> &second)
{
    return {first, second};
}

struct SizeSpecification : Specification<Product> {

    Size size;
    
    explicit SizeSpecification(const Size size)
    : size{ size }
    {
    }

    bool is_satisfied(Product*) const override;
};

struct ColorSpecification : Specification<Product> {

    Color color;
    
    explicit ColorSpecification(const Color color)
    : color{ color }
    {
    }
    bool is_satisfied(Product*) const override;
};

template <typename T> struct Filter {
    virtual std::vector<T*> filter(std::vector<T*> , Specification<T> &) const = 0;
};

struct FilterOnTypes : Filter<Product> {
    std::vector<Product*> filter(std::vector<Product*> , Specification<Product> &) const override;
};

template<typename T> struct AndSpecification : Specification<T> {
    const Specification<T> &first;
    const Specification<T> &second;

    AndSpecification(const Specification<T> &first, const Specification<T> &second) :first(first) , second(second) {}
    bool is_satisfied(T*) const override;
};

#endif