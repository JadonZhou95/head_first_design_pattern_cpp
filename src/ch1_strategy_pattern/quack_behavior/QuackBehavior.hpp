#ifndef H_QUACKBEHAVIOR_
#define H_QUACKBEHAVIOR_

class QuackBehavior
{
    public:
        QuackBehavior(){}
        ~QuackBehavior(){}

        virtual void quack() = 0;
};

#endif // H_QuackBehavior_