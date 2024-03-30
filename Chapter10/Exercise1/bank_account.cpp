#include "bank_account.hpp"

BankAccount::BankAccount(const std::string& owner_name, const std::string& number, const long long balance)
{
    owner_name_ = owner_name;
    number_ = number;
    balance_ = balance;
}

void BankAccount::DisplayOwnerName() const
{
    std::cout << "Bank account owner name: " << owner_name_ << std::endl;
}

void BankAccount::DisplayNumber() const
{
    std::cout << "Bank account number: " << number_ << std::endl;
}

void BankAccount::DisplayBalance() const
{
    std::cout << "Bank account balance: " << balance_ << std::endl;
}

void BankAccount::IncreaseBalance(long long money)
{
    balance_ += money;
}

void BankAccount::DecreaseBalance(long long money)
{
    if (balance_ >= money)
        balance_ -= money;
    else
        std::cout << "Insufficient funds" << std::endl;
}
