#ifndef BANKACCOUNT_HPP
#define BANKACCOUNT_HPP

#include <iostream>


class BankAccount
{
public:
    BankAccount(const std::string& owner_name, const std::string& number, const long long balance);

    void DisplayOwnerName() const;
    void DisplayNumber() const;
    void DisplayBalance() const;

    void IncreaseBalance(const long long money);
    void DecreaseBalance(const long long money);

private:
    std::string owner_name_;
    std::string number_;
    long long balance_;
};


#endif // BANKACCOUNT_HPP
