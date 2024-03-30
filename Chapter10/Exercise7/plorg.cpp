#include "plorg.hpp"
#include <cstring>
#include <iostream>

Plorg::Plorg(const char name[], int contentment_index)
{
    std::strcpy(name_, name);  // insecure
    contentment_index_ = contentment_index;
}

void Plorg::ChangeCI(int contentment_index)
{
    contentment_index_ = contentment_index;
}

void Plorg::ShowName() const
{
    std::cout << "Name: " << name_ << std::endl;
}

void Plorg::ShowCI() const
{
    std::cout << "Contentment index: " << contentment_index_ << std::endl;
}
