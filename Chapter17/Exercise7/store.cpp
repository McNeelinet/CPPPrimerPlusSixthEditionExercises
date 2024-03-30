#include "store.hpp"

Store::Store(std::ofstream& os) : os_(os) {}

void Store::operator()(const std::string& str)
{
    size_t len = str.length();
    os_.write(reinterpret_cast<char*>(&len), sizeof(size_t));
    os_.write(str.data(), len);
}
