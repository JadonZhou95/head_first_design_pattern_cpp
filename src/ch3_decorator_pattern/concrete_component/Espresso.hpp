#ifndef ESPRESSO
#define ESPRESSO

#include "Beverage.hpp"

class Espresso: public Beverage
{
    public:
        Espresso()
        {
            description_ = "Espresso";
        }

        double cost()
        {
            return 4.0;
        }
};


#endif