#ifndef HPP_NYPEPPERONI_
#define HPP_NYPEPPERONI_

#include "Pepperoni.hpp"

class NYPepperoni: public Pepperoni
{
    public:
        NYPepperoni(const std::string &description = "NYPepperoni"):Pepperoni(description){}
        ~NYPepperoni(){}
};

#endif