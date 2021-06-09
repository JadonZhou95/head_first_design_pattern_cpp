#ifndef HPP_NYVEGGIES_
#define HPP_NYVEGGIES_

#include "Veggies.hpp"

class NYVeggies: public Veggies
{
    public:
        NYVeggies(const std::string &description = "NYVeggies"):Veggies(description){}
        ~NYVeggies(){}
};

#endif