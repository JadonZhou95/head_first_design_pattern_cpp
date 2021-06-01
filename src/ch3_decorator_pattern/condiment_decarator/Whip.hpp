#ifndef HPP_WHIP_
#define HPP_WHIP_


#include "CondimentDecarator.hpp"
class Whip: public CondimentDecarator
{
    public:
        Whip(Beverage* beverage)
        {
            beverage_ = beverage;
        }

        double cost()
        {
            return 0.3 + beverage_->cost();
        }

        std::string getDescription()
        {
            return beverage_->getDescription() + ", Whip";
        }
};

#endif