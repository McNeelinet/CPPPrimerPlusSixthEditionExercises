#ifndef PLORG_HPP
#define PLORG_HPP

class Plorg
{
public:
    Plorg(const char name[] = "Plorga", int contentment_index = 50);
    void ChangeCI(int contentment_index);
    void ShowName() const;
    void ShowCI() const;
private:
    char name_[19];
    int contentment_index_;
};

#endif // PLORG_HPP
