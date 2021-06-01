#ifndef HPP_DARKROAST_
#define HPP_DARKROAST_

#include "Beverage.hpp"

class DarkRoast: public Beverage
{
    public:
        DarkRoast()
        {
            description_ = "DarkRoast";
        }

        double cost()
        {
            return 3.5;
        }
};

#endif