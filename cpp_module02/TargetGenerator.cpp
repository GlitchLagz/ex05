#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(){}

TargetGenerator::~TargetGenerator(){}

TargetGenerator & TargetGenerator::operator=(TargetGenerator const &src){
    _Target = src._Target;
    return *this;
}
TargetGenerator::TargetGenerator(TargetGenerator const &src){
    operator=(src);
}

void TargetGenerator::learnTargetType(ATarget* target){
    if (target)
        _Target[target->getType()] = target;
}

void TargetGenerator::forgetTargetType(std::string const & target){
    if (_Target.find(target) != _Target.end())
        _Target.erase(_Target.find(target));
}

ATarget* TargetGenerator::createTarget(std::string const &target){
    ATarget* res = NULL;
    if (_Target.find(target) != _Target.end())
        res = _Target[target];
    return res;
}