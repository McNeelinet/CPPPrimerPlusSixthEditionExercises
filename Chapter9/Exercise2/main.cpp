#include <iostream>
#include "golf.hpp"


const int TEAM_SIZE = 4;

int main()
{
    golf players[TEAM_SIZE];

    std::cout << "Who is in your team? \n";
    for (int i = 0; i < TEAM_SIZE; ++i)
        setgolf(players[i]);

    std::cout << "So, your team is:\n";
    for (int i = 0; i < TEAM_SIZE; ++i)
        showgolf(players[i]);

    return 0;
}
