#ifndef H_FLYWITHWINGS_
#define H_FLYWITHWINGS_

#include "FlyBehavior.hpp"
#include <iostream>

class FlyWithWings: public FlyBehavior
{
    public:
        FlyWithWings(){}
        ~FlyWithWings(){}

        void fly()
        {
            std::cout << "Fly with wings." << std::endl;    
        }
};

#endif // H_FLYWITHWINGS_
