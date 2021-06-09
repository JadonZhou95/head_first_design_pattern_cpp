#ifndef HPP_PEPPERONI_
#define HPP_PEPPERONI_

#include <string>

class Pepperoni
{
    private:
        std::string description_;

    public:
        Pepperoni(const std::string &description){description_ = description;}
        ~Pepperoni(){};

        std::string getDescription()
        {
            return description_;
        }
};

#endif