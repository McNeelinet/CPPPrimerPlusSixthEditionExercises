#include "wine.hpp"

#include <iostream>


Wine::Wine()
{
    label_ = "none";
    year_count_ = 0;
}

Wine::Wine(const char* label, int year_count)
{
    label_ = label;
    year_count_ = year_count;
    year_bottles_ = PairArray(
        ArrayInt(0, year_count_),
        ArrayInt(0, year_count_)
    );
}

Wine::Wine(const char* label, int year_count, const int years[], const int bottles[])
{
    label_ = label;
    year_count_ = year_count;
    year_bottles_ = PairArray(
        ArrayInt(years, year_count_),
        ArrayInt(bottles, year_count_)
    );
}

void Wine::GetBottles()
{
    std::cout << "Enter " << label_ << " data for 4 year(s):" << std::endl;

    for (int i = 0; i < year_count_; ++i)
    {
        int year;
        int bottles;

        std::cout << "Enter year: ";
        std::cin >> year;

        std::cout << "Enter bottles for that year: ";
        std::cin >> bottles;

        year_bottles_.first[i] = year;
        year_bottles_.second[i] = bottles;
    }
}

const std::string& Wine::Label() const
{
    return label_;
}

void Wine::Show() const
{
    using std::cout;
    using std::endl;

    cout << "Wine: " << label_ << endl;
    cout << "\tYear\tBottles" << endl;
    for (int i = 0; i < year_count_; ++i)
    {
        cout << '\t' << year_bottles_.first[i]
             << '\t' << year_bottles_.second[i] << endl;
    }
}

int Wine::Sum() const
{
    return year_bottles_.second.sum();
}
