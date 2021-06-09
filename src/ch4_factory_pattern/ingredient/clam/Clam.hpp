#ifndef HPP_CLAM_
#define HPP_CLAM_

#include <string>

class Clam
{
    private:
        std::string description_;

    public:
        Clam(const std::string &description){description_ = description;}
        ~Clam(){};

        std::string getDescription()
        {
            return description_;
        }
};

#endif