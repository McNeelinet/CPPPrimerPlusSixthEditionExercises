#ifndef CHAFF_HPP
#define CHAFF_HPP


const int Len = 20;

struct chaff
{
    char dross[Len];
    int slag;
};

void setChaff(chaff& c, const char* dross, int slag);

void showChaff(const chaff& c);


#endif // CHAFF_HPP
