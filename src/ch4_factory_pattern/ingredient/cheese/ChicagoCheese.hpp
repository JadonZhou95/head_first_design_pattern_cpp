#ifndef HPP_CHICAGOCHEESE_
#define HPP_CHICAGOCHEESE_

#include "Cheese.hpp"

class ChicagoCheese: public Cheese
{
    public:
        ChicagoCheese(const std::string &description = "ChicagoCheese"):Cheese(description){}
        ~ChicagoCheese(){}
};

#endif