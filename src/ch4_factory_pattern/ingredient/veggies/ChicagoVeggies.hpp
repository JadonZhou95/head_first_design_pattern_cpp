#ifndef HPP_CHICAGOVEGGIES_
#define HPP_CHICAGOVEGGIES_

#include "Veggies.hpp"

class ChicagoVeggies: public Veggies
{
    public:
        ChicagoVeggies(const std::string &description = "ChicagoVeggies"):Veggies(description){}
        ~ChicagoVeggies(){}
};

#endif