#include <iostream>


int main()
{
    using namespace std;

    int num1;
    cout << "Enter first integer: ";
    cin >> num1;

    int num2;
    cout << "Enter second integer: ";
    cin >> num2;

    int sum = 0;
    for (int c = num1; c <= num2; ++c)
        sum += c;

    cout << "Sum of all integers from "
         << num1 << " to " << num2
         << " is " << sum << endl;

    return 0;
}
