#include <iostream>
#include <array>


int main()
{
    using std::array;
    using std::cout;
    using std::cin;

    array<double, 3> results;

    cout << "Enter first result: ";
    cin >> results[0];

    cout << "Enter second result: ";
    cin >> results[1];

    cout << "Enter third result: ";
    cin >> results[2];

    cout << "\n";

    cout << "Results.\n";
    cout << "First: " << results[0] << "\n";
    cout << "Second: " << results[1] << "\n";
    cout << "Third: " << results[2] << "\n";
    cout << "Average: "
         << ( results[0] + results[1] + results[2] ) / 3
         << "\n";

    return 0;
}
