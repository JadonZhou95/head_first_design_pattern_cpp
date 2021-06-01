#ifndef HPP_MILK_
#define HPP_MILK_


#include "CondimentDecarator.hpp"
class Milk: public CondimentDecarator
{
    public:
        Milk(Beverage* beverage)
        {
            beverage_ = beverage;
        }

        double cost()
        {
            return 0.5 + beverage_->cost();
        }

        std::string getDescription()
        {
            return beverage_->getDescription() + ", Milk";
        }
};

#endif