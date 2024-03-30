#ifndef STONEWT_HPP
#define STONEWT_HPP

#include <iostream>


class StoneWt
{
public:
    enum State {
        STONE,
        POUNDS,
        FLOAT_POUNDS
    };
private:
    enum {LBS_PER_STN = 14};
    State form;
    int stone;
    double pds_left;
    double pounds;
public:
    StoneWt(double lbs, State form = STONE);
    StoneWt(int stn, double lbs, State form = STONE);
    StoneWt(State form = STONE);
    ~StoneWt();

    void SetFormStone();
    void SetFormPounds();
    void SetFormFloatPounds();

    StoneWt operator+(const StoneWt& swt) const;
    StoneWt operator-(const StoneWt& swt) const;
    StoneWt operator*(const StoneWt& swt) const;

    friend std::ostream& operator<<(std::ostream& os, const StoneWt& swt);
};


#endif // STONEWT_HPP
