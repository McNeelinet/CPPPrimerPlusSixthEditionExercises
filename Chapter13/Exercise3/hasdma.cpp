#include "hasdma.hpp"
#include <cstring>
#include <iostream>


HasDMA::HasDMA(const char* style, const char* label, int rating) : DMAABC(label, rating)
{
    style_ = new char[std::strlen(style) + 1];
    std::strcpy(style_, style);
}

HasDMA::HasDMA(const char* style, const DMAABC& ref) : DMAABC(ref)
{
    style_ = new char[std::strlen(style) + 1];
    std::strcpy(style_, style);
}

HasDMA::HasDMA(const HasDMA& ref) : DMAABC(ref)
{
    style_ = new char[std::strlen(ref.style_) + 1];
    std::strcpy(style_, ref.style_);
}

HasDMA& HasDMA::operator=(const HasDMA& ref)
{
    if (this == &ref)
        return *this;

    DMAABC::operator=(ref);
    delete[] style_;

    style_ = new char[std::strlen(ref.style_) + 1];
    std::strcpy(style_, ref.style_);

    return *this;
}

void HasDMA::View() const
{
    DMAABC::View();
    std::cout << "Style: " << style_ << std::endl;
}

HasDMA::~HasDMA()
{
    delete[] style_;
}

std::ostream& operator<<(std::ostream& os, const HasDMA& ref)
{
    os << (const DMAABC&) ref;
    os << "Style: " << ref.style_ << std::endl;

    return os;
}
