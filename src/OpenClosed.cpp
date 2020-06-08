#include <OpenClosed.h>

bool SizeSpecification::is_satisfied(Product *item) const
{
    return item->size == this->size;
}  

bool ColorSpecification::is_satisfied(Product *item) const
{
    return item->color == this->color;
} 

std::vector<Product *> FilterOnTypes::filter(std::vector<Product*> items, Specification<Product> &spec) const
{   
    std::vector<Product *> result;
    for(auto &item : items) {
        if(spec.is_satisfied(item)) 
            result.push_back(item);
    }
    return result;
}

template <typename T>
bool AndSpecification<T>::is_satisfied(T *item) const
{
    first.is_satisfied(item) && second.is_satisfied(item);
}
