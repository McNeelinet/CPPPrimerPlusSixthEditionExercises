#include <iostream>

double lightYearsToAstroUnits(double);

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    double lightYears;
    cout << "Enter the number of light years: ";
    cin >> lightYears;

    cout << lightYears << " light years = "
         << lightYearsToAstroUnits(lightYears)
         << " astronomical units." << endl;

    return 0;
}

double lightYearsToAstroUnits(double lightYears)
{
    return lightYears * 63240;
}
