#include <iostream>
#include <cstring>
#include "chaff.hpp"


void setChaff(chaff& c, const char* dross, int slag)
{
    std::strncpy(c.dross, dross, Len);
    c.slag = slag;
}

void showChaff(const chaff& c)
{
    using std::cout;
    using std::endl;

    cout << "Dross: " << c.dross << endl;
    cout << "Slag: " << c.slag << endl;
}
