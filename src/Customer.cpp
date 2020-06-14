#include "Customer.h"
#include "CustomerBuilder.h"

CustomerBuilder Customer::builder() {
    return CustomerBuilder{};
}

std::unique_ptr<Account> Customer::GetAccount() {
    return std::move(account);
}
std::unique_ptr<Profile> Customer::GetProfile() {
    return std::move(profile);
}
std::vector<std::string> Customer::GetEmails() {
    return emails;
}
std::vector<std::string> Customer::GetAddresses() {
    return addresses;
}