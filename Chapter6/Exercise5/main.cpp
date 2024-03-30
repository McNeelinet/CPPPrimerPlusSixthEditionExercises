#include <iostream>


const double firstFeePercent = 0.1;
const double secondFeePercent = 0.15;
const double thirdFeePercent = 0.2;

const double firstFeeSum = 5000;
const double secondFeeSum = 15000;
const double thirdFeeSum = 35000;

int main()
{
    using namespace std;

    double fee = 0;
    double income = 0;

    while (cin >> income and income >= 0) {
        fee = 0;

        if (thirdFeeSum < income) {
            fee += (income - thirdFeeSum) * thirdFeePercent;
            income = thirdFeeSum;
        }
        if (secondFeeSum < income and income <= thirdFeeSum) {
            fee += (income - secondFeeSum) * secondFeePercent;
            income = secondFeeSum;
        }
        if (firstFeeSum < income and income <= secondFeeSum)
            fee += (income - firstFeeSum) * firstFeePercent;

        cout << "Fee: " << fee << endl;
    }

    cout << "Bye!" << endl;

    return 0;
}
