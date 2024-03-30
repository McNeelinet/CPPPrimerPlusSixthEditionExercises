#include "cow.hpp"
#include <iostream>


using namespace std;

int main()
{
    Cow daria;
    daria.ShowCow();

    Cow maria("Maria", "Eating grass", 800);
    maria.ShowCow();

    std::cout << "Clone experiment" << endl;
    std::cout << "Cloning cow Maria..." << endl;
    Cow clone = maria;
    clone.ShowCow();

    std::cout << "Transformation experiment" << endl;
    std::cout << "Transforming clone of cow Maria to Daria..." << endl;
    clone = daria;
    clone.ShowCow();

    return 0;
}
