#ifndef STONEWT_HPP
#define STONEWT_HPP

class StoneWt
{
public:
    StoneWt(double lbs);
    StoneWt(int stn, double lbs);
    StoneWt();
    ~StoneWt();

    bool operator==(const StoneWt& swt) const;
    bool operator!=(const StoneWt& swt) const;
    bool operator>=(const StoneWt& swt) const;
    bool operator<=(const StoneWt& swt) const;
    bool operator>(const StoneWt& swt) const;
    bool operator<(const StoneWt& swt) const;

    void ShowLbs() const;
    void ShowStn() const;
private:
    enum { LBS_PER_STN = 14 };
    int stone;
    double pds_left;
    double pounds;
};

#endif // STONEWT_HPP
