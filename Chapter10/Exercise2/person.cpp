#include "person.hpp"
#include <cstring>


Person::Person(const std::string& ln, const char* fn)
{
    lname = ln;
    std::strcpy(fname, fn);  // Предположим, что длина fn не больше LIMIT
}

void Person::Show() const
{
    std::cout << fname << " " << lname << std::endl;
}

void Person::FormalShow() const
{
    std::cout << lname << " " << fname << std::endl;
}
