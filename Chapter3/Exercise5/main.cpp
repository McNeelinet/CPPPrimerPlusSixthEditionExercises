#include <iostream>


int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    long long worldPopulation;
    cout << "Enter the world's population: ";
    cin >> worldPopulation;

    long long russiaPopulation;
    cout << "Enter the population of the Russia: ";
    cin >> russiaPopulation;

    cout << "The population of the Russia is "
         << float(russiaPopulation) / float(worldPopulation) * 100
         << "% of the world population." << endl;

    return 0;
}
