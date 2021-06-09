#ifndef HPP_CHEESE_
#define HPP_CHEESE_

#include <string>

class Cheese
{
    private:
        std::string description_;

    public:
        Cheese(const std::string &description){description_ = description;}
        ~Cheese(){}

        std::string getDescription()
        {
            return description_;
        }
};

#endif