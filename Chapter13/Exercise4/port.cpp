#include "port.hpp"
#include <cstring>


Port::Port(const char* br, const char* st, int b)
{
    brand = new char[std::strlen(br) + 1];
    std::strcpy(brand, br);

    std::strncpy(style, st, 19);
    style[19] = '\0';

    bottles = b;
}

Port::Port(const Port& p)
{
    brand = new char[std::strlen(p.brand) + 1];
    std::strcpy(brand, p.brand);

    std::strncpy(style, p.style, 19);
    style[19] = '\0';

    bottles = p.bottles;
}

Port& Port::operator=(const Port& p)
{
    if (this == &p)
        return *this;

    delete[] brand;
    brand = new char[std::strlen(p.brand) + 1];
    std::strcpy(brand, p.brand);

    std::strncpy(style, p.style, 19);
    style[19] = '\0';

    bottles = p.bottles;

    return *this;
}

Port& Port::operator+=(int b)
{
    bottles += b;

    return *this;
}

Port& Port::operator-=(int b)
{
    if (bottles > b)
        bottles -= b;

    return *this;
}

void Port::Show() const
{
    std::cout << "Brand: " << brand << '\n';
    std::cout << "Kind: " << style << '\n';
    std::cout << "Bottles: " << bottles << '\n';
}

ostream& operator<<(ostream& os, const Port& p)
{
    os << p.brand << ", " << p.style << ", " << p.bottles;

    return os;
}
