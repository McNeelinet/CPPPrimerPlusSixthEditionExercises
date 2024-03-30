#include "classic.hpp"
#include <cstring>
#include <iostream>


Classic::Classic(const char* s1,
                 const char* s2,
                 const char* s3,
                 int n,
                 double x)
    : CD(s2, s3, n, x)
{
    std::strncpy(greatest_track, s1, 49);
    greatest_track[49] = '\0';
}

Classic::Classic(const Classic& c) : CD(c)
{
    std::strncpy(greatest_track, c.greatest_track, 49);
    greatest_track[49] = '\0';
}

Classic::Classic() : CD()
{
    std::strcpy(greatest_track, "none");
}

void Classic::Report() const
{
    CD::Report();
    std::cout << "Greatest track: " << greatest_track << '\n';
}

Classic& Classic::operator=(const Classic& c)
{
    if (this == &c)
        return *this;

    CD::operator=(c);
    std::strcpy(greatest_track, c.greatest_track);

    return *this;
}

Classic::~Classic()
{

}
