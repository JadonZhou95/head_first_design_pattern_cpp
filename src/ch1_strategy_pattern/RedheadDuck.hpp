#ifndef H_REDHEADDUCK_
#define H_REDHEADDUCK_

#include "Duck.hpp"

class RedheadDuck: public Duck
{
    public:
        RedheadDuck()
        {
            flyBehavior_ = new FlyWithWings();
            quackBehavior_ = new Squack();
        }

        ~RedheadDuck()
        {
            delete flyBehavior_;
            delete quackBehavior_;
        }

        void display()
        {
            std::cout << "This is a Redhead Duck." << std::endl;
        }

};


#endif