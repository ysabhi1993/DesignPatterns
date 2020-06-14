#ifndef PROFILE_H
#define PROFILE_H

#include <string>

class Profile {
    std::string first_name;
    std::string last_name;
    std::string phone;
    std::string gender;
    int age;

public :
    std::string GetFirstName();
    std::string GetLastName();
    std::string GetPhone();
    std::string GetGender();
    int GetAge();
    
    friend class CustomerProfileBuilder;
};

#endif