#ifndef CUSTOMER_ACCOUNT_BUILDER_H
#define CUSTOMER_ACCOUNT_BUILDER_H

#include <CustomerBuilder.h>
#include <string>
#include <ctime>

class CustomerAccountBuilder : public Builder {

public:
    CustomerAccountBuilder(Customer &customer) : Builder{std::move(customer)} {};

    CustomerAccountBuilder &withAccountId(const std::string);
    CustomerAccountBuilder &withAccountName(const std::string);
    CustomerAccountBuilder &withOpenDate(const time_t);
};

#endif