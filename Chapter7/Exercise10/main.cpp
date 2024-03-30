#include <iostream>


double calculate(double num1, double num2, double (*operation)(double, double));
double add(double x, double y);
double subtract(double num1, double num2);
double multiply(double num1, double num2);

const int OPERATIONS = 3;

int main()
{
    using namespace std;

    double num1, num2;
    double (*operations[OPERATIONS])(double, double) = {add, subtract, multiply};

    cout << "Enter a pair of numbers: ";
    cin >> num1 >> num2;

    while (cin) {
        for (int i = 0; i < OPERATIONS; ++i)
            cout << calculate(num1, num2, operations[i]) << endl;

        cout << "Enter another pair of numbers: ";
        cin >> num1 >> num2;
    }

    return 0;
}

double calculate(double num1, double num2, double (*operation)(double, double))
{
    return operation(num1, num2);
}

double add(double num1, double num2)
{
    return num1 + num2;
}

double subtract(double num1, double num2)
{
    return num1 - num2;
}

double multiply(double num1, double num2)
{
    return num1 * num2;
}
