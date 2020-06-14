#include <CustomerBuilder.h>
#include <CustomerAccountBuilder.h>
#include <CustomerProfileBuilder.h>

Builder::Builder() {};

CustomerBuilder::CustomerBuilder() {
    // customer = std::make_unique<Customer>();
    // customer->account = std::make_unique<Account>();
    // customer->profile = std::make_unique<Profile>();
    Builder{std::move(*customer)};
}

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

CustomerAccountBuilder CustomerBuilder::withAccount() {
    return CustomerAccountBuilder{*customer};
}

CustomerProfileBuilder CustomerBuilder::withProfile() {
    return CustomerProfileBuilder{*customer};
}