#ifndef COW_HPP
#define COW_HPP

class Cow
{
public:
    Cow();
    Cow(const char* name, const char* hobby, double weight);
    Cow(const Cow& c);

    Cow& operator=(const Cow& c);
    void ShowCow() const;

    ~Cow();

private:
    char name_[20];
    char* hobby_;
    double weight_;
};

#endif // COW_HPP
