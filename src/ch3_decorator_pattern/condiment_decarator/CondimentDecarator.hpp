#ifndef HPP_CONDIMENTDECARATOR_
#define HPP_CONDIMENTDECARATOR_

#include "Beverage.hpp"

class CondimentDecarator: public Beverage
{
    protected:
        Beverage* beverage_;
};

#endif