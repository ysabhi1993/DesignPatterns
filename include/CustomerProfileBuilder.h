#ifndef CUSTOMER_PROFILE_BUILDER_H
#define CUSTOMER_PROFILE_BUILDER_H

#include <CustomerBuilder.h>
#include <string>
#include <ctime>

struct CustomerProfileBuilder : Builder {
    CustomerProfileBuilder &withFirstName(const std::string);
    CustomerProfileBuilder &withLastName(const std::string);
    CustomerProfileBuilder &withPhone(const std::string);
    CustomerProfileBuilder &withGender(const std::string);
    CustomerProfileBuilder &withAge(const int);
};

#endif