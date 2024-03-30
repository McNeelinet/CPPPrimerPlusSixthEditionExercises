#include <iostream>
#include <cstring>
#include <string>
#include "golf.hpp"


void setgolf(golf& g, const char* name, int hc)
{
    strncpy(g.fullname, name, Len);
    g.handicap = hc;
}

int setgolf(golf& g)
{
    using std::cin;
    using std::cout;

    cout << "Enter name: \n";
    cin.get(g.fullname, Len);
    while (cin.get() != '\n');  // Strip too long input

    cout << "Enter handicap: \n";
    (cin >> g.handicap).get();

    return *(g.fullname) == '\0' ? 0 : 1;
}

void handicap(golf& g, int hc)
{
    g.handicap = hc;
}

void showgolf(const golf& g)
{
    using std::cout;
    using std::endl;

    cout << "Name: " << g.fullname << endl;
    cout << "Handicap: " << g.handicap << endl;
}
