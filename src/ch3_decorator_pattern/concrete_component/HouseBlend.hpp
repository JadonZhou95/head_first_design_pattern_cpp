#ifndef HPP_HOUSEBLEND_
#define HPP_HOUSEBLEND_

#include "Beverage.hpp"

class HouseBlend: public Beverage
{
    public:
        HouseBlend()
        {
            description_ = "HouseBlend";          
        }

        double cost()
        {
            return 3.0;
        }
};

#endif