#ifndef HPP_OBSERVERINTERFACE_
#define HPP_OBSERVERINTERFACE_

class ObserverInterface
{
    public:
    virtual void update() = 0;

    virtual void unsubscribe() = 0;
};


#endif