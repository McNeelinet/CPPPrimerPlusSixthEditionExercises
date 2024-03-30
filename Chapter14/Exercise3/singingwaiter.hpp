#ifndef SINGINGWAITER_HPP
#define SINGINGWAITER_HPP

#include "singer.hpp"
#include "waiter.hpp"


class SingingWaiter : public Singer, public Waiter
{
protected:
    void Data() const;
    void Get();
public:
    SingingWaiter() {}
    SingingWaiter(const std::string& s, long n, int p = 0, int v = other)
        : Worker(s, n), Waiter(s, n, p), Singer(s, n, v) {}
    SingingWaiter(const Worker& wk, int p = 0, int v = other)
        : Worker(wk), Waiter(wk, p), Singer(wk, v) {}
    SingingWaiter(const Waiter& wt, int v = other)
        : Worker(wt), Waiter(wt), Singer(wt, v) {}
    SingingWaiter(const Singer& wt, int p = 0)
        : Worker(wt), Waiter(wt, p), Singer(wt) {}

    void Set();
    void Show() const;
};


#endif // SINGINGWAITER_HPP
