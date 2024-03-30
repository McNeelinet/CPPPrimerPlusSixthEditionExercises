#include <iostream>


int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    float distance;
    cout << "Enter the distance in kilometers: ";
    cin >> distance;

    float consumption;
    cout << "Enter fuel consumption in liters: ";
    cin >> consumption;

    cout << "Fuel consumption per 100 kilometers: "
         << consumption / distance * 100 << endl;

    return 0;
}
