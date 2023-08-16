#pragma once

#include <iostream>
#include "ATarget.hpp"
#include <map>

class TargetGenerator
{
    public:
        TargetGenerator();
        ~TargetGenerator();
        void learnTargetType(ATarget *obj);
        void forgetTargetType(std::string const &obj);
        ATarget* createTarget(std::string const &obj);
    
    private:
        std::map<std::string, ATarget *> target;
};