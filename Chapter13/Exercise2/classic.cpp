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
    greatest_track = new char[std::strlen(s1) + 1];
    strcpy(greatest_track, s1);
}

Classic::Classic(const Classic& c) : CD(c)
{
    greatest_track = new char[std::strlen(c.greatest_track) + 1];
    strcpy(greatest_track, c.greatest_track);
}

Classic::Classic() : CD()
{
    greatest_track = new char[5];
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
    delete[] greatest_track;
    greatest_track = new char[std::strlen(c.greatest_track) + 1];
    strcpy(greatest_track, c.greatest_track);

    return *this;
}

Classic::~Classic()
{
    delete[] greatest_track;
}
