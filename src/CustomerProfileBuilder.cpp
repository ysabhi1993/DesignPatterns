#include <CustomerProfileBuilder.h>

CustomerProfileBuilder &CustomerProfileBuilder::withFirstName(const std::string first_name) {
    customer->profile->first_name = first_name;
    return *this;
}

CustomerProfileBuilder &CustomerProfileBuilder::withLastName(const std::string last_name) {
    customer->profile->last_name = last_name;
    return *this;
}

CustomerProfileBuilder &CustomerProfileBuilder::withPhone(const std::string phone) {
    customer->profile->phone = phone;
    return *this;
}

CustomerProfileBuilder &CustomerProfileBuilder::withGender(const std::string gender) {
    customer->profile->gender = gender;
    return *this;
}

CustomerProfileBuilder &CustomerProfileBuilder::withAge(const int age) {
    customer->profile->age = age;
    return *this;
}
