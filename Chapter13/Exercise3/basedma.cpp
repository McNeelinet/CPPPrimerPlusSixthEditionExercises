#include "basedma.hpp"

BaseDMA::BaseDMA(const char* label, int rating) : DMAABC(label, rating)
{
    ;
}

BaseDMA::BaseDMA(const DMAABC& ref) : DMAABC(ref)
{
    ;
}

BaseDMA::~BaseDMA()
{
    ;
}
