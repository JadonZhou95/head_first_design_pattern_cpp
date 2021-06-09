#ifndef HPP_NYCHEESE_
#define HPP_NYCHEESE_

#include "Cheese.hpp"

class NYCheese: public Cheese
{
    public:
        NYCheese(const std::string &description = "NYCheese"):Cheese(description){}
        ~NYCheese(){}
};

#endif