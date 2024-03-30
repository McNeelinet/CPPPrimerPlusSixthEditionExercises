#ifndef MOVE_HPP
#define MOVE_HPP

class Move
{
public:
    Move(double a = 0, double b = 0);
    void ShowMove() const;
    Move Add(const Move& m) const;
    void Reset(double a = 0, double b = 0);
private:
    double x;
    double y;
};

#endif // MOVE_HPP
