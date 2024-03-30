#include <iostream>


double CalcHarmonicMean(double num1, double num2);

int main()
{
    using namespace std;

    double num1, num2;
    cout << "Enter pair of numbers: " << endl;
    cin >> num1 >> num2;

    while (num1 != 0 and num2 != 0) {
        cout << CalcHarmonicMean(num1, num2) << endl;

        cout << "Enter another pair of numbers: " << endl;
        cin >> num1 >> num2;
    }

    return 0;
}

double CalcHarmonicMean(double num1, double num2)
{
    return 2.0 * num1 * num2 / (num1 + num2);
}
