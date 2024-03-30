#ifndef GOLF_HPP
#define GOLF_HPP


const int Len = 40;

class Golf
{
public:
    Golf();
    Golf(const char* name, int hc);

    void SetGolf();
    void SetHandicap(int hc);
    void ShowGolf() const;
private:
    char fullname[Len];
    int handicap;
};


#endif // GOLF_HPP
