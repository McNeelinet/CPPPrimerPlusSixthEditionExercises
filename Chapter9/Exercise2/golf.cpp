#include <iostream>
#include <string>
#include "golf.hpp"


void setgolf(golf& g, std::string name, int hc)
{
    g.fullname = name;
    g.handicap = hc;
}

int setgolf(golf& g)
{
    using std::cin;
    using std::cout;

    cout << "Enter name: \n";
    std::getline(cin, g.fullname);

    cout << "Enter handicap: \n";
    (cin >> g.handicap).get();

    return g.fullname.empty() ? 0 : 1;
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
