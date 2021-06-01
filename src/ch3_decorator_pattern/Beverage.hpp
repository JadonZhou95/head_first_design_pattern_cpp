#ifndef HPP_BEVERAGE_
#define HPP_BEVERAGE_

#include <iostream>
#include <string>


class Beverage
{
    protected:
        std::string description_;
    
    public:
        virtual std::string getDescription()
        {
            return description_;
        }

        virtual double cost() = 0;  
};


#endif

