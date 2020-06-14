#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
#include <vector>
#include <memory>

#include "Account.h"
#include "Profile.h"

struct CustomerBuilder;

class Customer {
    
    std::unique_ptr<Account> account;
    std::unique_ptr<Profile> profile;
    std::vector<std::string> emails;
    std::vector<std::string> addresses;
    
public: 

    std::unique_ptr<Account> GetAccount();
    std::unique_ptr<Profile> GetProfile();
    std::vector<std::string> GetEmails();
    std::vector<std::string> GetAddresses();

    static CustomerBuilder builder();
    friend class CustomerBuilder;
    friend class CustomerAccountBuilder;
    friend class CustomerProfileBuilder;
};


#endif