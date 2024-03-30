#ifndef BASEDMA_HPP
#define BASEDMA_HPP

#include "dmaabc.hpp"


class BaseDMA : DMAABC
{
public:
    BaseDMA(const char* label = "null", int rating = 0);
    BaseDMA(const DMAABC& ref);

    virtual ~BaseDMA();
};


#endif // BASEDMA_HPP
