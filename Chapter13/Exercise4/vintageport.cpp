#include "vintageport.hpp"
#include <cstring>


VintagePort::VintagePort() : Port()
{
    nickname = new char[5];
    std::strcpy(nickname, "none");

    year = 0;
}

VintagePort::VintagePort(const char* br, int b, const char* nn, int y) : Port(br, "vintage", b)
{
    nickname = new char[std::strlen(nn) + 1];
    std::strcpy(nickname, nn);

    year = y;
}

VintagePort::VintagePort(const VintagePort& vp) : Port(vp)
{
    nickname = new char[std::strlen(vp.nickname) + 1];
    std::strcpy(nickname, vp.nickname);

    year = vp.year;
}

VintagePort& VintagePort::operator=(const VintagePort& vp)
{
    if (this == &vp)
        return *this;

    Port::operator=(vp);
    delete[] nickname;

    nickname = new char[std::strlen(vp.nickname) + 1];
    std::strcpy(nickname, vp.nickname);

    year = vp.year;

    return *this;
}

void VintagePort::Show() const
{
    Port::Show();
    std::cout << "Nickname: " << nickname << '\n';
    std::cout << "Year: " << year << '\n';
}

ostream& operator<<(ostream& os, const VintagePort& vp)
{
    os << (const Port&) vp << ", " << vp.nickname << ", " << vp.year;

    return os;
}
