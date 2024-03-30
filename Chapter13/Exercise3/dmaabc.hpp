#ifndef DMAABC_HPP
#define DMAABC_HPP

#include <ostream>


class DMAABC
{
private:
    char* label_;
    int rating_;
public:
    DMAABC(const char* label = "null", int rating = 0);
    DMAABC(const DMAABC& ref);

    DMAABC& operator=(const DMAABC& ref);

    virtual void View() const = 0;

    friend std::ostream& operator<<(std::ostream& os, const DMAABC& ref);

    virtual ~DMAABC();
};


#endif // DMAABC_HPP
