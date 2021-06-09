#ifndef HPP_CHICAGODOUGE_
#define HPP_CHICAGODOUGE_

#include "Douge.hpp"

class ChicagoDouge: public Douge
{
    public:
        ChicagoDouge(const std::string &description = "ChicagoDouge"):Douge(description){}
        ~ChicagoDouge(){}
};

#endif