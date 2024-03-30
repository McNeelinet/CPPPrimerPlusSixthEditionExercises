#include <iostream>

double celsiusToFahrenheit(double);

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    double celsius;
    cout << "Please enter a Celsius value: ";
    cin >> celsius;

    cout << celsius << " degrees Celsius is "
         << celsiusToFahrenheit(celsius)
         << " degrees Fahrenheit." << endl;

    return 0;
}

double celsiusToFahrenheit(double celsius)
{
    return 1.8 * celsius + 32;
}
