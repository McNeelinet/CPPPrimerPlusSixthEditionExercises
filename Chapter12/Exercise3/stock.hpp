#ifndef STOCK_HPP
#define STOCK_HPP

#include <iostream>


class Stock
{
public:
    Stock();
    Stock(const char* co, long n = 0, double pr = 0.0);
    Stock(const Stock& s) = delete;
    Stock& operator=(const Stock& s) = delete;
    ~Stock();

    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);

    const Stock& topval(const Stock& s) const;

    friend std::ostream& operator<<(std::ostream& os, const Stock& s);
private:
    char* company;
    int shares;
    double share_val;
    double total_val;

    void set_tot() { total_val = shares * share_val; }
};


#endif // STOCK_HPP
