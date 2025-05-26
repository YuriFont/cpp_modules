#ifndef DATA_HPP
#define DATA_HPP

#include <string>

struct Data {
    int id;
    std::string name;
    Data(int i, std::string n) : id(i), name(n) {}
};

#endif
