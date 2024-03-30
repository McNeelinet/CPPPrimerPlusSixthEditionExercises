#include <iostream>


const int inchPerFoot = 12;

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    int height;
    cout << "Enter your height in inches: "
         << "____\b\b\b\b";
    cin >> height;

    cout << "Your height is "
         << height / inchPerFoot << " feet and "
         << height % inchPerFoot << " inches."
         << endl;

    return 0;
}
