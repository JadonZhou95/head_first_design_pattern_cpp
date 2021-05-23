#ifndef H_MALARDDUCK_
#define H_MALARDDUCK_

#include "Duck.hpp"

class MalardDuck: public Duck
{
    public:
        MalardDuck()
        {
            flyBehavior_ = new FlyWithWings();
            quackBehavior_ = new Quack();
        }

        ~MalardDuck()
        {
            delete flyBehavior_;
            delete quackBehavior_;
        }

        void display()
        {
            std::cout << "This is a Malard Duck." << std::endl; 
        }
};

#endif // H_MALARDDUCK_