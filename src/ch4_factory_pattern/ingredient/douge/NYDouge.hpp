#ifndef HPP_NYDOUGE_
#define HPP_NYDOUGE_

#include "Douge.hpp"

class NYDouge: public Douge
{
    public:
        NYDouge(const std::string &description = "NYDouge"):Douge(description){}
        ~NYDouge(){}
};

#endif