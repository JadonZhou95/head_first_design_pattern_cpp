#ifndef H_DUCK_
#define H_DUCK_
#include <iostream>

#include "fly_behavior/FlyBehavior.h"
#include "quack_behavior/QuackBehavior.h"

using namespace std;

class Duck
{
    protected:
        FlyBehavior* flyBehavior_;
        QuackBehavior* quackBehavior_;

    public:
        Duck(){}
        ~Duck(){}

        virtual void display() = 0;

        void performSwimming()
        {
            cout << "Swim" << endl;
        }

        void performFlying()
        {
            flyBehavior_->fly();
        }

        void performQuacking()
        {
            quackBehavior_->quack();
        }

        void setFlyBehavior(FlyBehavior* p_flyBehavior)
        {
            delete flyBehavior_;
            flyBehavior_ = p_flyBehavior;
        }

        void setQuackBehavior(QuackBehavior* p_quackBehavior)
        {
            delete quackBehavior_;
            quackBehavior_ = p_quackBehavior;
        }

};

#endif // H_DUCK_