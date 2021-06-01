#ifndef HPP_SOY_
#define HPP_SOY_


#include "CondimentDecarator.hpp"
class Soy: public CondimentDecarator
{
    public:
        Soy(Beverage* beverage)
        {
            beverage_ = beverage;
        }

        double cost()
        {
            return 0.4 + beverage_->cost();
        }

        std::string getDescription()
        {
            return beverage_->getDescription() + ", Soy";
        }
};

#endif