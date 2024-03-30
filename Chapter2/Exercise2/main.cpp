#include <iostream>

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    cout << "I can convert furlongs to yards." << endl;

    double furlongs;
    cout << "Enter furlongs distance: ";
    cin >> furlongs;

    cout << furlongs << " furlongs are "
         << furlongs * 220 << " yards." << endl;


    return 0;
}
