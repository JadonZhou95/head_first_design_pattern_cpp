#ifndef HPP_CHICAGOCLAM_
#define HPP_CHICAGOCLAM_

#include "Clam.hpp"

class ChicagoClam: public Clam
{
    public:
        ChicagoClam(const std::string &description = "ChicagoClam"):Clam(description){}
        ~ChicagoClam(){}
};

#endif