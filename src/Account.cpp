#include <Account.h>

std::string Account::GetAccountId() {
    return account_id;
}

std::string Account::GetAccountName() {
    return account_name;
}

time_t Account::GetOpenDate() {
    return open_date;
}