#include "stonewt.hpp"


StoneWt::StoneWt(double lbs, State form)
{
    stone = int(lbs) / LBS_PER_STN;
    pds_left = int(lbs) % LBS_PER_STN + lbs - int(lbs);
    pounds = lbs;
}

StoneWt::StoneWt(int stn, double lbs, State form)
{
    stone = stn;
    pds_left = lbs;
    pounds = stn * LBS_PER_STN + lbs;
}

StoneWt::StoneWt(State form)
{
    stone = pounds = pds_left = 0;
}

StoneWt::~StoneWt()
{
    ;
}

void StoneWt::SetFormStone()
{
    form = STONE;
}

void StoneWt::SetFormPounds()
{
    form = POUNDS;
}

void StoneWt::SetFormFloatPounds()
{
    form = FLOAT_POUNDS;
}

StoneWt StoneWt::operator+(const StoneWt& swt) const
{
    return StoneWt(pounds + swt.pounds);
}

StoneWt StoneWt::operator-(const StoneWt& swt) const
{
    return StoneWt(pounds - swt.pounds);
}

StoneWt StoneWt::operator*(const StoneWt& swt) const
{
    return StoneWt(pounds * swt.pounds);
}


std::ostream& operator<<(std::ostream& os, const StoneWt& swt)
{
    if (swt.form == StoneWt::STONE)
        os << swt.stone << " stone, " << swt.pds_left << " pounds\n";
    else if (swt.form == StoneWt::FLOAT_POUNDS)
        os << swt.pounds << " pounds\n";
    else if (swt.form == StoneWt::POUNDS)
        os << int(swt.pounds) << " pounds\n";
    else
        os << "Form is invalid\n";

    return os;
}
