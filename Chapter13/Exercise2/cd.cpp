#include "cd.hpp"
#include <cstring>
#include <iostream>


CD::CD(const char* s1, const char* s2, int n, double x)
{
    performers = new char[std::strlen(s1) + 1];
    std::strcpy(performers, s1);

    label = new char[std::strlen(s2) + 1];
    std::strcpy(label, s2);

    selections = n;
    playtime = x;
}

CD::CD(const CD& d)
{
    performers = new char[std::strlen(d.performers) + 1];
    std::strcpy(performers, d.performers);

    label = new char[std::strlen(d.label) + 1];
    std::strcpy(label, d.label);

    selections = d.selections;
    playtime = d.playtime;
}

CD::CD()
{
    performers = new char[5];
    strcpy(performers, "none");

    label = new char[5];
    strcpy(label, "none");

    selections = 0;
    playtime = 0.0;
}

void CD::Report() const
{
    std::cout << "Performers: " << performers << '\n';
    std::cout << "Label: " << label << '\n';
    std::cout << "Selections: " << selections << '\n';
    std::cout << "Playtime: " << playtime << '\n';
}

CD& CD::operator=(const CD& d)
{
    if (this == &d)
        return *this;

    delete[] performers;
    performers = new char[std::strlen(d.performers) + 1];
    std::strcpy(performers, d.performers);

    delete[] label;
    label = new char[std::strlen(d.label) + 1];
    std::strcpy(label, d.label);

    selections = d.selections;
    playtime = d.playtime;

    return *this;
}

CD::~CD()
{
    delete[] performers;
    delete label;
}
