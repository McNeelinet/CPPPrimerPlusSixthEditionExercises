#include <iostream>


const int secPerMin = 60;
const int minPerHour = 60;
const int hoursPerDay = 24;

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    long long entered_seconds;
    cout << "Enter the number of seconds: ";
    cin >> entered_seconds;
    long long seconds = entered_seconds;

    int days = seconds / (hoursPerDay * minPerHour * secPerMin);
    seconds = seconds - days * hoursPerDay * minPerHour * secPerMin;

    int hours = seconds / (minPerHour * secPerMin);
    seconds = seconds - hours * minPerHour * secPerMin;

    int minutes = seconds / (secPerMin);
    seconds = seconds - minutes * secPerMin;

    cout << entered_seconds << " seconds = "
         << days << " days, "
         << hours << " hours, "
         << minutes << " minutes, "
         << seconds << " seconds."
         << endl;

    return 0;
}
