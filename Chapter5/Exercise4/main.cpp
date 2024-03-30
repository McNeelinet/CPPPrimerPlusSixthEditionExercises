#include <iostream>


const double daphnePercent = 0.10;
const double cleoPercent = 0.05;
const double initBalance = 100;

int main()
{
    using namespace std;

    int year = 0;
    double daphneBalance = initBalance;
    double cleoBalance = initBalance;

    do {
        year += 1;
        daphneBalance += (initBalance * daphnePercent);
        cleoBalance += (cleoBalance * cleoPercent);

        cout << "After " << year << " year(s):" << endl;
        cout << "Daphne balance: " << daphneBalance << endl;
        cout << "Cleo balance: " << cleoBalance << endl;
        cout << endl;
    } while (cleoBalance < daphneBalance);

    cout << "After " << year << " year(s) Cleo's balance"
         << " will be bigger than Daphne's." << endl;

    return 0;
}
