#ifndef H_FLYBEHAVIOR_
#define H_FLYBEHAVIOR_

class FlyBehavior
{
    public:
        FlyBehavior(){}
        ~FlyBehavior(){}

        virtual void fly() = 0;
};

#endif // H_FLYBEHAVIOR_