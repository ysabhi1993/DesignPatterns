#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
#include <vector>

#include "Account.h"
#include "Profile.h"

class Customer {
    
    Account *account;
    Profile *profile;
    std::vector<std::string> emails;
    std::vector<std::string> addresses;
    
    static CustomerBuilder builder() {return {};}
    friend class CustomerBuilder;
    friend class CustomerAccountBuilder;
    friend class CustomerProfileBuilder;
};


#endif