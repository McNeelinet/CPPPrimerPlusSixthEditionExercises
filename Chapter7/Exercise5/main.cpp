#include <iostream>


long long calcFactorial(int i);

int main()
{
    using namespace std;

    int i;
    cout << "Enter non-negative number: ";
    cin >> i;

    while (cin and i >= 0) {
        cout << "Factorial: " << calcFactorial(i) << endl;
        cout << "Enter another non-negative number: ";
        cin >> i;
    }

    return 0;
}


long long calcFactorial(int i)
{
    switch(i)
    {
    case 0:
    case 1:
        return 1;
    default:
        return i * calcFactorial(i - 1);
    }
}
