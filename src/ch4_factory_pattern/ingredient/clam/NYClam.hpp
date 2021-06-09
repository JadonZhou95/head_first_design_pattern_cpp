#ifndef HPP_NYCLAM_
#define HPP_NYCLAM_

#include "Clam.hpp"

class NYClam: public Clam
{
    public:
        NYClam(const std::string &description = "NYClam"):Clam(description){}
        ~NYClam(){}
};

#endif