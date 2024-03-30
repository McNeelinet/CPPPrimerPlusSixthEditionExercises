#include "stonewt.hpp"
#include <iostream>

using namespace std;

int main()
{
    StoneWt weights[6] = {
        StoneWt(14.9),
        StoneWt(5.4),
        StoneWt(3.1)
    };

    for (int i = 3; i < 6; ++i)
    {
        double pounds;
        cout << "Please enter weight in pounds for element №" << i + 1 << ": ";
        cin >> pounds;

        weights[i] = StoneWt(pounds);
    }

    StoneWt eleven(11, 0);
    StoneWt smallest = weights[0];
    StoneWt biggest = weights[0];
    int bigger_eleven = 0;

    for (int i = 0; i < 6; i++)
    {
        if (weights[i] < smallest)
            smallest = weights[i];
        if (weights[i] > biggest)
            biggest = weights[i];
        if (weights[i] >= eleven)
            ++bigger_eleven;
    }

    cout << "Smallest:" << endl;
    smallest.ShowLbs();

    cout << "Biggest:" << endl;
    biggest.ShowLbs();

    cout << "Bigger than eleven stones: " << bigger_eleven << " elements." << endl;

    return 0;
}
