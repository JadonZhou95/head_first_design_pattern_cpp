#ifndef HPP_CHICAGOPEPPERONI_
#define HPP_CHICAGOPEPPERONI_

#include "Pepperoni.hpp"

class ChicagoPepperoni: public Pepperoni
{
    public:
        ChicagoPepperoni(const std::string &description = "ChicagoPepperoni"):Pepperoni(description){}
        ~ChicagoPepperoni(){}
};

#endif