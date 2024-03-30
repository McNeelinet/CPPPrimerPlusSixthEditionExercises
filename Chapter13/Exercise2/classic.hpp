#ifndef CLASSIC_HPP
#define CLASSIC_HPP

#include "cd.hpp"


class Classic : public CD
{
private:
    char* greatest_track;
public:
    Classic(const char* s1, const char* s2, const char* s3, int n, double x);
    Classic(const Classic& c);
    Classic();

    virtual void Report() const;
    Classic& operator=(const Classic& c);

    ~Classic();
};


#endif // CLASSIC_HPP
