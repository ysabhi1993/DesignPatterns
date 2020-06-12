#include <CustomerBuilder.h>


CustomerBuilder &CustomerBuilder::withEmail(const std::string email) {
    customer->emails.emplace_back(email);
    return *this;
}

CustomerBuilder &CustomerBuilder::withAddress(const std::string address) {
    customer->addresses.emplace_back(address);
    return *this;
}

CustomerBuilder &CustomerBuilder::withEmails(const std::vector<std::string> emails) {
    customer->emails.insert(customer->emails.end(), emails.begin(), emails.end());
    return *this;
}

CustomerBuilder &CustomerBuilder::withAddresses(const std::vector<std::string> addresses) {
    customer->addresses.insert(customer->addresses.end(), addresses.begin(), addresses.end());
    return *this;
}