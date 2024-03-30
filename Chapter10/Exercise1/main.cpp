#include <iostream>
#include "bank_account.hpp"

using namespace std;

int main()
{
    cout << "Let's create bank account" << endl;
    BankAccount john_doe = BankAccount("John Doe", "1234 1234 1234 1234", 100);

    john_doe.DisplayOwnerName();
    john_doe.DisplayNumber();
    john_doe.DisplayBalance();

    cout << "Let's go shopping!" << endl;
    john_doe.DecreaseBalance(50);
    john_doe.DisplayBalance();

    cout << "I want to buy this for 70" << endl;
    john_doe.DecreaseBalance(70);

    cout << "Transfer from other card..." << endl;
    john_doe.IncreaseBalance(100);
    john_doe.DisplayBalance();

    cout << "Finally..." << endl;
    john_doe.DecreaseBalance(70);
    john_doe.DisplayBalance();

    return 0;
}
