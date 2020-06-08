#include <DependencyInversion.h>

std::vector<Person>  Relationship::GetParents(const Person &person) 
{
    std::vector<Person> result;
    for(auto &&[first, rel, second] : community) {
        if(first.name == person.name && rel == Relations::Parent) 
            result.push_back(first);
    }
    return result;
}

// Instead of using Relationship struct, use the abstract object RelationshipBrowser 
Research::Research(RelationshipBrower &browser, Person &person) 
{
    for(auto &parent : browser.GetParents(person)) {
        //do something
    }
}