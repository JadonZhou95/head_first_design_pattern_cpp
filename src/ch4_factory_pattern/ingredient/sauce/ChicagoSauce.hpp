#ifndef HPP_CHICAGOSAUCE_
#define HPP_CHICAGOSAUCE_

#include "Sauce.hpp"

class ChicagoSauce: public Sauce
{
    public:
        ChicagoSauce(const std::string &description = "ChicagoSauce"):Sauce(description){}
        ~ChicagoSauce(){}
};

#endif