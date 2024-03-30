#include "cd.hpp"
#include <cstring>
#include <iostream>


CD::CD(const char* s1, const char* s2, int n, double x)
{
    strncpy(performers, s1, 49);
    performers[49] = '\0';

    strncpy(label, s2, 19);
    label[19] = '\0';

    selections = n;
    playtime = x;
}

CD::CD(const CD& d)
{
    strncpy(performers, d.performers, 49);
    performers[49] = '\0';

    strncpy(label, d.label, 19);
    label[19] = '\0';

    selections = d.selections;
    playtime = d.playtime;
}

CD::CD()
{
    strcpy(performers, "none");
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

    strncpy(performers, d.performers, 49);
    performers[49] = '\0';

    strncpy(label, d.label, 19);
    label[19] = '\0';

    selections = d.selections;
    playtime = d.playtime;

    return *this;
}

CD::~CD()
{

}
