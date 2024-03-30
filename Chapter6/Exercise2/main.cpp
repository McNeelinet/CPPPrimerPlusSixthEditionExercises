#include <iostream>
#include <array>


const int arraySize = 10;


int main()
{
    using namespace std;

    array<double, arraySize> donations;
    int length;

    for (length = 0; length < arraySize and cin >> donations[length]; ++length)
        continue;

    double average = 0;
    for (int i = 0; i < length; ++i)
        average += donations[i];
    average /= length;
    cout << "Average donate size: " << average << endl;

    double counter = 0;
    for (int i = 0; i < length; ++i)
        if (donations[i] > average)
            ++counter;
    cout << "There are " << counter
         << " donations bigger than average." << endl;

    return 0;
}
