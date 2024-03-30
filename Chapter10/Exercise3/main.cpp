#include "golf.hpp"
#include <iostream>


const int TEAM_SIZE = 4;

int main()
{
    Golf players[TEAM_SIZE];

    std::cout << "Who is in your team? \n";
    for (int i = 0; i < TEAM_SIZE; ++i)
        players[i].SetGolf();

    std::cout << "So, your team is: \n";
    for (int i = 0; i < TEAM_SIZE; ++i)
        players[i].ShowGolf();

    return 0;
}
