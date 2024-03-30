#ifndef SINGER_HPP
#define SINGER_HPP

#include "worker.hpp"


class Singer : virtual public Worker
{
protected:
    enum {other, alto, contralto, soprano, bass, baritone, tenor};
    enum {Vtypes = 7};

    void Data() const;
    void Get();
private:
    constexpr static const char* const pv[Vtypes] = {"other", "alto", "contralto", "soprano", "bass", "baritone", "tenor"};

    int voice;
public:
    Singer() : Worker(), voice(other) {}
    Singer(const std::string& s, long n, int v = other) : Worker(s, n), voice(v) {}
    Singer(const Worker& wk, int v = other) : Worker(wk), voice(v) {}

    void Set();
    void Show() const;
};


#endif // SINGER_HPP
