#ifndef LACKSDMA_HPP
#define LACKSDMA_HPP

#include "dmaabc.hpp"


class LacksDMA : public DMAABC
{
private:
    enum { COL_LEN = 40 };
    char color_[COL_LEN];
public:
    LacksDMA(const char* color = "blank", const char* label = "null", int rating = 0);
    LacksDMA(const char* color, const DMAABC& ref);
    LacksDMA(const LacksDMA& ref);

    LacksDMA& operator=(const LacksDMA& ref);

    virtual void View() const override;

    friend std::ostream& operator<<(std::ostream& os, const LacksDMA& ref);

    virtual ~LacksDMA();
};


#endif // LACKSDMA_HPP
