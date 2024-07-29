#pragma once

#include <iostream>
#include "ATarget.hpp"
#include <map>

class TargetGenerator{
    private:
        std::map<std::string, ATarget*> _Target;
        TargetGenerator & operator=(TargetGenerator const &src);
        TargetGenerator(TargetGenerator const &src);

    public:
        TargetGenerator();
        ~TargetGenerator();
        void learnTargetType(ATarget*);
        void forgetTargetType(std::string const &);
        ATarget* createTarget(std::string const &);
        
};