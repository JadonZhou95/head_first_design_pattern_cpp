#ifndef H_FLYNOWAYS_
#define H_FLYNOWAYS_

#include "FlyBehavior.hpp"
#include <iostream>

class FlyNoWays: public FlyBehavior
{
    public:
        FlyNoWays(){}
        ~FlyNoWays(){}
        
        void fly()
        {
            std::cout << "Fly no ways." << std::endl;
        }
};
#endif //H_FLYNOWAYS_

