#include <iostream>
#include <string>


struct car {
    std::string manufacturer;
    int year;
};

int main()
{
    using namespace std;

    int carsNumber;
    cout << "How many cars to put in the catalog? ";
    (cin >> carsNumber).get();

    car* cars = new car[carsNumber];
    for (int i = 0; i < carsNumber; ++i) {
        cout << "Car #" << i + 1 << ":" << endl;

        cout << "Enter manufacturer: ";
        getline(cin, cars[i].manufacturer);

        cout << "Enter year of manufacture: ";
        (cin >> cars[i].year).get();
    }

    cout << "Here is your collection:" << endl;
    for (int i = 0; i < carsNumber; ++i)
        cout << cars[i].year << " " << cars[i].manufacturer << endl;

    return 0;
}
