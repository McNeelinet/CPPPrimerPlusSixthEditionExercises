#include "dmaabc.hpp"
#include <cstring>
#include <iostream>


DMAABC::DMAABC(const char* label, int rating)
{
    label_ = new char[std::strlen(label) + 1];
    strcpy(label_, label);

    rating_ = rating;
}

DMAABC::DMAABC(const DMAABC& ref)
{
    label_ = new char[std::strlen(ref.label_) + 1];
    strcpy(label_, ref.label_);

    rating_ = ref.rating_;
}

DMAABC& DMAABC::operator=(const DMAABC& ref)
{
    if (this == &ref)
        return *this;

    delete[] label_;
    label_ = new char[std::strlen(ref.label_) + 1];
    strcpy(label_, ref.label_);

    rating_ = ref.rating_;

    return *this;
}

void DMAABC::View() const
{
    std::cout << "Label: " << label_ << std::endl;
    std::cout << "Rating: " << rating_ << std::endl;
}

DMAABC::~DMAABC()
{
    delete label_;
}

std::ostream& operator<<(std::ostream& os, const DMAABC& ref)
{
    os << "Label: " << ref.label_ << std::endl;
    os << "Rating: " << ref.rating_ << std::endl;

    return os;
}
