#ifndef WINE_HPP
#define WINE_HPP

#include <string>
#include <valarray>
#include <utility>


class Wine
{
private:
    typedef std::valarray<int> ArrayInt;
    typedef std::pair<ArrayInt, ArrayInt> PairArray;

    std::string label_;
    int year_count_;
    PairArray year_bottles_;

public:
    Wine();
    Wine(const char* label, int year_count);
    Wine(const char* label, int year_count, const int years[], const int bottles[]);

    void GetBottles();
    const std::string& Label() const;
    void Show() const;
    int Sum() const;
};


#endif // WINE_HPP
