#include "lacksdma.hpp"
#include <cstring>
#include <iostream>


LacksDMA::LacksDMA(const char* color, const char* label, int rating) : DMAABC(label, rating)
{
    std::strncpy(color_, color, COL_LEN - 1);
    color_[COL_LEN - 1] = '\0';
}

LacksDMA::LacksDMA(const char* color, const DMAABC& ref) : DMAABC(ref)
{
    std::strncpy(color_, color, COL_LEN - 1);
    color_[COL_LEN - 1] = '\0';
}

LacksDMA::LacksDMA(const LacksDMA& ref) : DMAABC(ref)
{
    std::strcpy(color_, ref.color_);
}

LacksDMA& LacksDMA::operator=(const LacksDMA& ref)
{
    if (this == &ref)
        return *this;

    DMAABC::operator=(ref);
    std::strcpy(color_, ref.color_);

    return *this;
}

void LacksDMA::View() const
{
    DMAABC::View();
    std::cout << "Color: " << color_ << std::endl;
}

LacksDMA::~LacksDMA()
{
    ;
}

std::ostream& operator<<(std::ostream& os, const LacksDMA& ref)
{
    os << (const DMAABC&) ref;
    os << "Color: " << ref.color_ << std::endl;

    return os;
}
