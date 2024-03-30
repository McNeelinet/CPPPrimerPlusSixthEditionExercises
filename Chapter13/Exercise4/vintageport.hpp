#ifndef VINTAGEPORT_HPP
#define VINTAGEPORT_HPP

#include "port.hpp"


class VintagePort : public Port
{
private:
    char* nickname;
    int year;
public:
    VintagePort();
    VintagePort(const char* br, int b, const char* nn, int y);
    VintagePort(const VintagePort& vp);

    VintagePort& operator=(const VintagePort& vp);
    void Show() const;

    friend ostream& operator<<(ostream& os, const VintagePort& vp);

    ~VintagePort() { delete[] nickname; }
};


#endif // VINTAGEPORT_HPP
