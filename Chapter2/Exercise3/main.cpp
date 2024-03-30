#include <iostream>

void firstFrase();
void secondFrase();

using std::cout;
using std::endl;

int main()
{
    firstFrase();
    firstFrase();

    secondFrase();
    secondFrase();

    return 0;
}

void firstFrase()
{
    cout << "Three blind mice" << endl;
}

void secondFrase()
{
    cout << "See how they run" << endl;
}
