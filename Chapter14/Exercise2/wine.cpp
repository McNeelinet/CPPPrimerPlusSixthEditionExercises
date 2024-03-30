#include "wine.hpp"
#include <iostream>
#include <ostream>

Wine::Wine() : std::string("None")
{
    year_count_ = 0;
}

Wine::Wine(const char* label, int year_count)
    : std::string(label),
    PairArray(
          ArrayInt(0, year_count),
          ArrayInt(year_count)
    )
{
    year_count_ = year_count;
}

Wine::Wine(const char* label, int year_count, const int years[], const int bottles[])
    : std::string(label),
    PairArray(
          ArrayInt(years, year_count),
          ArrayInt(bottles, year_count)
    )
{
    year_count_ = year_count;
}

void Wine::GetBottles()
{
    std::cout << "Enter " << (const std::string&) *this << " data for 4 year(s):" << std::endl;

    for (int i = 0; i < year_count_; ++i)
    {
        int year;
        int bottles;

        std::cout << "Enter year: ";
        std::cin >> year;

        std::cout << "Enter bottles for that year: ";
        std::cin >> bottles;

        PairArray::first[i] = year;
        PairArray::second[i] = bottles;
    }
}

const std::string& Wine::Label() const
{
    return (const std::string&) *this;
}

void Wine::Show() const
{
    using std::cout;
    using std::endl;

    cout << "Wine: " << (const std::string&) *this << endl;
    cout << "\tYear\tBottles" << endl;
    for (int i = 0; i < year_count_; ++i)
    {
        cout << '\t' << PairArray::first[i]
             << '\t' << PairArray::second[i] << endl;
    }
}

int Wine::Sum() const
{
    return PairArray::second.sum();
}
