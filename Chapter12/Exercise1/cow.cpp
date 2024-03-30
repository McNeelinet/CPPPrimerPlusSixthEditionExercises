#include "cow.hpp"
#include <cstring>
#include <iostream>


Cow::Cow()
{
    hobby_ = new char[12];

    std::strcpy(name_, "Daria");
    std::strcpy(hobby_, "Giving milk");
    weight_ = 720;
}

Cow::Cow(const char* name, const char* hobby, double weight)
{
    hobby_ = new char[std::strlen(hobby + 1)];

    std::strcpy(name_, name);
    std::strcpy(hobby_, hobby);
    weight_ = weight;
}

Cow::Cow(const Cow& c)
{
    hobby_ = new char[std::strlen(c.hobby_ + 1)];

    std::strcpy(name_, c.name_);
    std::strcpy(hobby_, c.hobby_);
    weight_ = c.weight_;
}

Cow::~Cow()
{
    delete[] hobby_;
}

Cow& Cow::operator=(const Cow& c)
{
    if (this == &c)
        return *this;

    delete[] hobby_;
    hobby_ = new char[strlen(c.hobby_ + 1)];

    std::strcpy(name_, c.name_);
    std::strcpy(hobby_, c.hobby_);
    weight_ = c.weight_;

    return *this;
}

void Cow::ShowCow() const
{
    std::cout << "Cow " << name_ << ":\n";
    std::cout << "  Hobby: " << hobby_ << "\n";
    std::cout << "  Weight: " << weight_ << "\n";
}

