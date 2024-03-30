#include "move.hpp"
#include <iostream>

using namespace std;

int main()
{    
    Move move1(1, 2);
    cout << "Move 1:" << endl;
    move1.ShowMove();

    Move move2(3, 4);
    cout << "Move 2:" << endl;
    move2.ShowMove();

    Move move3 = move1.Add(move2);
    cout << "Move 3:" << endl;
    move3.ShowMove();

    move3.Reset();
    cout << "Move 3 (reset)" << endl;
    move3.ShowMove();

    return 0;
}
