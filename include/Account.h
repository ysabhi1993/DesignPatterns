#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>
#include <ctime>

class Account {
    std::string account_id;
    std::string account_name;
    time_t open_date;

public:
    std::string GetAccountId();
    std::string GetAccountName();
    time_t GetOpenDate();
    friend class CustomerAccountBuilder;
};

#endif