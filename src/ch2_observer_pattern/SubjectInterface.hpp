#ifndef HPP_SUBJECTINTERFACE_
#define HPP_SUBJECTINTERFACE_

#include <vector>

template <typename ObserverType>
class SubjectInterface
{
    protected:
    std::vector<ObserverType *> observers_;

    public:
    virtual void registerObserver(ObserverType* ob) = 0;
    
    virtual void removeObserver(ObserverType* ob) = 0;

    virtual void updateObserver() = 0;
};

#endif