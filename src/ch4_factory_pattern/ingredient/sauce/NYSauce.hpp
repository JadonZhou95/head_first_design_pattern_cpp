#ifndef HPP_NYSAUCE_
#define HPP_NYSAUCE_

#include "Sauce.hpp"

class NYSauce: public Sauce
{
    public:
        NYSauce(const std::string &description = "NYSauce"):Sauce(description){}
        ~NYSauce(){}
};

#endif