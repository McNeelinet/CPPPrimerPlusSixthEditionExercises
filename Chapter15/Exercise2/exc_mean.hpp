#ifndef EXC_MEAN_HPP
#define EXC_MEAN_HPP

#include <stdexcept>


class bad_hmean : public std::logic_error
{
public:
    bad_hmean(const string& err_msg = "invalid hmean() arguments: a = -b \n")
        : std::logic_error(err_msg) {}
};

class bad_gmean : public std::logic_error
{
public:
    bad_gmean(const string& err_msg = "gmean() arguments should be >= 0 \n")
        : std::logic_error(err_msg) {}
};


#endif // EXC_MEAN_HPP
