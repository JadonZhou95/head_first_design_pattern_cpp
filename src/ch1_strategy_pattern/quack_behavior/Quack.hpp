#ifndef H_QUACK_
#define H_QUACK_
#include <iostream>
#include "QuackBehavior.hpp"

class Quack: public QuackBehavior
{
    public:
        Quack(){}
        ~Quack(){}

        void quack()
        {
            std::cout << "Quack Quack Quack..." << std::endl;            
        }
};

#endif