#ifndef HPP_MOCHA_
#define HPP_MOCHA_


#include "CondimentDecarator.hpp"
class Mocha: public CondimentDecarator
{
    public:
        Mocha(Beverage* beverage)
        {
            beverage_ = beverage;
        }

        double cost()
        {
            return 0.6 + beverage_->cost();
        }

        std::string getDescription()
        {
            return beverage_->getDescription() + ", Mocha";
        }
};

#endif