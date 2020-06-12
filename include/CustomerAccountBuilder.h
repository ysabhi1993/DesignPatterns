#ifndef CUSTOMER_ACCOUNT_BUILDER_H
#define CUSTOMER_ACCOUNT_BUILDER_H

#include <CustomerBuilder.h>
#include <string>
#include <ctime>

struct CustomerAccountBuilder : Builder {
    CustomerAccountBuilder &withAccountId(const std::string);
    CustomerAccountBuilder &withAccountName(const std::string);
    CustomerAccountBuilder &withOpenDate(const time_t);
};

#endif