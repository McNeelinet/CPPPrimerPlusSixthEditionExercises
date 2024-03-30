#include "stonewt.hpp"
#include <iostream>


StoneWt::StoneWt(double lbs)
{
    stone = int(lbs) / LBS_PER_STN;
    pds_left = int(lbs) % LBS_PER_STN + lbs - int(lbs);
    pounds = lbs;
}

StoneWt::StoneWt(int stn, double lbs)
{
    stone = stn;
    pds_left = lbs;
    pounds = stn * LBS_PER_STN + lbs;
}

StoneWt::StoneWt()
{
    stone = pounds = pds_left = 0;
}

StoneWt::~StoneWt()
{
    ;
}

bool StoneWt::operator==(const StoneWt& swt) const
{
    return swt.pounds == pounds;
}

bool StoneWt::operator!=(const StoneWt& swt) const
{
    return swt.pounds != pounds;
}

bool StoneWt::operator>=(const StoneWt& swt) const
{
    return pounds >= swt.pounds;
}

bool StoneWt::operator<=(const StoneWt& swt) const
{
    return pounds <= swt.pounds;
}

bool StoneWt::operator>(const StoneWt& swt) const
{
    return pounds > swt.pounds;
}

bool StoneWt::operator<(const StoneWt& swt) const
{
    return pounds < swt.pounds;
}

void StoneWt::ShowStn() const
{
    std::cout << stone << " stone, " << pds_left << " pounds\n";
}

void StoneWt::ShowLbs() const
{
    std::cout << pounds << " pounds\n";
}


