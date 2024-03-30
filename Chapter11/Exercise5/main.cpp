#include "stonewt.hpp"
#include <iostream>

using namespace std;

int main()
{
    StoneWt weight1(15.8);
    StoneWt weight2(1, 0.2);
    StoneWt temp;

    cout << "Weight1:" << endl;
    weight1.SetFormStone();
    cout << weight1;
    weight1.SetFormPounds();
    cout << weight1;
    weight1.SetFormFloatPounds();
    cout << weight1;

    cout << "Weight2:" << endl;
    weight2.SetFormStone();
    cout << weight2;
    weight2.SetFormPounds();
    cout << weight2;
    weight2.SetFormFloatPounds();
    cout << weight2;

    temp = weight1 + weight2;
    temp.SetFormFloatPounds();
    cout << "Weight1 + Weight2" << endl;
    cout << temp;

    temp = weight1 - weight2;
    temp.SetFormFloatPounds();
    cout << "Weight1 - Weight2" << endl;
    cout << temp;

    temp = weight1 * weight2;
    temp.SetFormFloatPounds();
    cout << "Weight1 * Weight2" << endl;
    cout << temp;

    cout << "Weight1:" << endl;
    weight1.SetFormFloatPounds();
    cout << weight1;

    cout << "Weight2:" << endl;
    weight2.SetFormFloatPounds();
    cout << weight2;


    return 0;
}
