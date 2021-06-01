#ifndef HPP_DECAF_
#define HPP_DECAF_

#include "Beverage.hpp"
class Decaf: public Beverage
{
    public:
        Decaf()
        {
            description_ = "Decaf";
        }

        double cost()
        {
            return 4.5;
        }


};

#endif