#ifndef HPP_SAUCE_
#define HPP_SAUCE_

#include <string>

class Sauce
{
    private:
        std::string description_;

    public:
        Sauce(const std::string &description){description_ = description;}
        ~Sauce(){};

        std::string getDescription()
        {
            return description_;
        }
};

#endif