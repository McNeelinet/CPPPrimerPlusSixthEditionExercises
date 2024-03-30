#ifndef CD_HPP
#define CD_HPP

class CD
{
private:
    char performers[50];
    char label[20];
    int selections;
    double playtime;
public:
    CD(const char* s1, const char* s2, int n, double x);
    CD(const CD& d);
    CD();

    virtual void Report() const;
    CD& operator=(const CD& d);

    virtual ~CD();
};

#endif // CD_HPP
