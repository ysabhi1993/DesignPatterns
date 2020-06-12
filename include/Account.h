#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>
#include <ctime>

class Account {
    std::string account_id;
    std::string account_name;
    time_t open_date;
    
    friend class CustomerAccountBuilder;
};

#endif