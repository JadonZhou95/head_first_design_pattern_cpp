#ifndef H_RUBBERDUCK_
#define H_RUBBERDUCK_

#include "Duck.hpp"

class RubberDuck: public Duck
{
    public:
        RubberDuck()
        {
            flyBehavior_ = new FlyNoWays();
            quackBehavior_ = new MuteQuack();
        }

        ~RubberDuck()
        {
            delete flyBehavior_;
            delete quackBehavior_;
        }

        void display()
        {
            std::cout << "THis is a Rubber Duck." << std::endl;
        }
};


#endif