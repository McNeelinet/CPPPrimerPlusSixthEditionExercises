#include <iostream>
#include <string>


const int monthsNumber = 12;
const int yearsNumber = 3;

int main()
{
    using namespace std;

    int sales[yearsNumber][monthsNumber];
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

    for (int i = 0; i < yearsNumber; ++i) {
        cout << "Year " << i + 1 << endl;
        for (int j = 0; j < monthsNumber; ++j) {
            cout << "Sales in " << months[j] << ": ";
            cin >> sales[i][j];
        }
        cout << endl;
    }

    int totalSum = 0;
    for (int i = 0; i < yearsNumber; ++i) {
        int yearSum = 0;
        for (int j = 0; j < monthsNumber; ++j)
            yearSum += sales[i][j];

        cout << "Year " << i + 1 << " sales: " << yearSum << " books." << endl;
        totalSum += yearSum;
    }
    cout << "Total sales: " << totalSum << " books." << endl;

    return 0;
}
