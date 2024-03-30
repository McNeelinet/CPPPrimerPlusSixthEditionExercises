#ifndef STORE_HPP
#define STORE_HPP

#include <fstream>
#include <string>


class Store
{
private:
    std::ofstream& os_;
public:
    Store(std::ofstream& os);
    void operator()(const std::string& str);
};


#endif // STORE_HPP
