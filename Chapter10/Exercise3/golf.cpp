#include "golf.hpp"
#include <cstring>
#include <iostream>


Golf::Golf(const char* name, int hc)
{
    strcpy(fullname, name);
    handicap = hc;
}

Golf::Golf()
{
    fullname[0] = '\0';
    handicap = 0;
}

void Golf::SetGolf()
{
    using std::cin;
    using std::cout;

    char name[Len];
    int hc;

    cout << "Enter name: \n";
    cin.get(name, Len);
    while (cin.get() != '\n');

    cout << "Enter handicap: \n";
    (cin >> hc).get();

    *this = Golf(name, hc);
}

void Golf::SetHandicap(int hc)
{
    handicap = hc;
}

void Golf::ShowGolf() const
{
    std::cout << "Name: " << fullname << std::endl;
    std::cout << "Handicap: " << handicap << std::endl;
}
