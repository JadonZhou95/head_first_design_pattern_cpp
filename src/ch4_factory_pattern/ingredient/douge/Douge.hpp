#ifndef HPP_DOUGE_
#define HPP_DOUGE_

#include <string>

class Douge
{
    private:
        std::string description_;

    public:
        Douge(const std::string &description){description_ = description;}
        ~Douge(){};

        std::string getDescription()
        {
            return description_;
        }
};

#endif