#ifndef HPP_VEGGIES_
#define HPP_VEGGIES_

#include <string>

class Veggies
{
    private:
        std::string description_;

    public:
        Veggies(const std::string &description){description_ = description;}
        ~Veggies(){}

        std::string getDescription()
        {
            return description_;
        }
};

#endif