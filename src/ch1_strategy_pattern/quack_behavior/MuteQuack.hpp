#ifndef H_MUTEQUACK_
#define H_MUTEQUACK_

#include "QuackBehavior.hpp"
#include <iostream>

class MuteQuack: public QuackBehavior
{
    public:
        MuteQuack(){}
        ~MuteQuack(){}

        void quack()
        {
            std::cout << "..." << std::endl;
        }
};


#endif