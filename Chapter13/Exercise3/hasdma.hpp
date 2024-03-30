#ifndef HASDMA_HPP
#define HASDMA_HPP

#include "dmaabc.hpp"


class HasDMA : public DMAABC
{
private:
    char* style_;
public:
    HasDMA(const char* style = "none", const char* label = "null", int rating = 0);
    HasDMA(const char* style, const DMAABC& ref);
    HasDMA(const HasDMA& ref);

    HasDMA& operator=(const HasDMA& ref);

    virtual void View() const override;

    friend std::ostream& operator<<(std::ostream& os, const HasDMA& ref);

    ~HasDMA();
};


#endif // HASDMA_HPP
