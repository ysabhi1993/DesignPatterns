#ifndef CUSTOMER_BUILDER_H
#define CUSTOMER_BUILDER_H

#include <Customer.h>

struct Builder {
    Customer *customer;
    Customer build() {return *customer;}
};

struct CustomerBuilder : Builder
{
    CustomerBuilder &withEmail(const std::string);
    CustomerBuilder &withAddress(const std::string);
    CustomerBuilder &withEmails(const std::vector<std::string>);
    CustomerBuilder &withAddresses(const std::vector<std::string>);
};

#endif
