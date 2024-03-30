#include "move.hpp"
#include <iostream>


Move::Move(double a, double b)
{
    x = a;
    y = b;
}

void Move::ShowMove() const
{
    std::cout << "x: " << x << std::endl;
    std::cout << "y: " << y << std::endl;
}

Move Move::Add(const Move& m) const
{
    return Move(x + m.x, y + m.y);
}

void Move::Reset(double a, double b)
{
    x = a;
    y = b;
}
