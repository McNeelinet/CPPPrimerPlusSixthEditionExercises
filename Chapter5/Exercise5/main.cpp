#include <iostream>
#include <string>
#include <array>


const int monthsNumber = 12;

int main()
{
    using namespace std;

    int sales[monthsNumber];
    string months[monthsNumber] = {
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December"
    };

    for (int i = 0; i < monthsNumber; ++i) {
        cout << "Sales in " << months[i] << ": ";
        cin >> sales[i];
    }

    int sum = 0;
    for (int i = 0; i < monthsNumber; ++i)
        sum += sales[i];
    cout << "Total sales: " << sum << " books." << endl;

    return 0;
}
