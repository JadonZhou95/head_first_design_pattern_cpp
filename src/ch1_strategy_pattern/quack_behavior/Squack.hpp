#ifndef H_SQUACK_
#define H_SQUACK_

#include <iostream>
#include "QuackBehavior.hpp"

class Squack: public QuackBehavior
{
    public:
        Squack(){}
        ~Squack(){}

        void quack()
        {
            std::cout << "Squack Squack Squack..." << std::endl;
        }
};

#endif