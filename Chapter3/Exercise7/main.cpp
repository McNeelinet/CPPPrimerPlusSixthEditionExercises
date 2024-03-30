#include <iostream>


const float miPerHungreedKm = 62.14;
const float litersPerGal = 3.875;

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    float consumption;
    cout << "Enter fuel consumption per 100 kilometers (in liters): ";
    cin >> consumption;

    cout << "You can drive "
         << (miPerHungreedKm * litersPerGal) / consumption
         << " miles on one gallon of fuel." << endl;

    return 0;
}
