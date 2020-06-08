#ifndef DEPENDENCY_INVERSION_H
#define DEPENDENCY_INVERSION_H

#include <vector>
#include <tuple>
#include <string> 

struct Person{
    std::string name;
};

enum class Relations { Parent, Child};

struct RelationshipBrower {
    virtual std::vector<Person> GetParents(const Person &) = 0;
};

struct Relationship : RelationshipBrower {
    std::vector<std::tuple<Person, Relations, Person> > community;
    std::vector<Person> GetParents(const Person &) override;
};

struct Research {
    Person person{"Person1"};
    Research(RelationshipBrower &, Person &);
};

#endif