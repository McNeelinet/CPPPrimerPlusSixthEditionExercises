#include <iostream>

void printTime(int, int);

int main()
{
    using std::cout;
    using std::cin;

    int hours;
    cout << "Enter the number of hours: ";
    cin >> hours;

    int minutes;
    cout << "Enter the number of minutes: ";
    cin >> minutes;

    printTime(hours, minutes);
    return 0;
}

void printTime(int hours, int minutes)
{
    using std::cout;
    using std::endl;

    cout << "Time: " << hours
         << ":" << minutes << endl;
}
