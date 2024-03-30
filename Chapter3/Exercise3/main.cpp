#include <iostream>


const int minPerDeg = 60;
const int secPerMin = 60;

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    cout << "Enter a latitude in degrees, minutes, and seconds:" << endl;

    int degrees;
    cout << "First, enter the degrees: ";
    cin >> degrees;

    int minutes;
    cout << "Next, enter the minutes of arc: ";
    cin >> minutes;

    int seconds;
    cout << "Finally, enter the seconds of arc: ";
    cin >> seconds;

    cout << degrees << " degrees, "
         << minutes << " minutes, "
         << seconds << " seconds = "
         << degrees + (float(minutes) / minPerDeg) + (float(seconds) / secPerMin / minPerDeg)
         << " degrees." << endl;

    return 0;
}
