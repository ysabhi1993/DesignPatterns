#ifndef CUSTOMER_BUILDER_H
#define CUSTOMER_BUILDER_H

#include <memory>

#include <Customer.h>
#include <Account.h>
#include <Profile.h>

struct CustomerAccountBuilder;
struct CustomerProfileBuilder;

struct Builder {
    std::unique_ptr<Customer> customer;
    Builder();
    Builder(Customer &&customer) : customer(&customer){}
    std::unique_ptr<Customer> build() {return std::move(customer);}
};

class CustomerBuilder : public Builder
{
private:
    std::unique_ptr<Customer> customer;

public:
    CustomerBuilder();

    CustomerBuilder &withEmail(const std::string);
    CustomerBuilder &withAddress(const std::string);
    CustomerBuilder &withEmails(const std::vector<std::string>);
    CustomerBuilder &withAddresses(const std::vector<std::string>);

    CustomerAccountBuilder withAccount();
    CustomerProfileBuilder withProfile();
};

#endif
