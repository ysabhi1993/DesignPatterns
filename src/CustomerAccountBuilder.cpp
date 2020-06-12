#include <CustomerAccountBuilder.h>

CustomerAccountBuilder &CustomerAccountBuilder::withAccountId(const std::string account_id) {
    customer->account->account_id = account_id;
    return *this;
}

CustomerAccountBuilder &CustomerAccountBuilder::withAccountName(const std::string account_name) {
    customer->account->account_name = account_name;
    return *this;
}

CustomerAccountBuilder &CustomerAccountBuilder::withOpenDate(const time_t open_date) {
    customer->account->open_date = open_date;
    return *this;
}