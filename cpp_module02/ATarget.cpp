#include "ATarget.hpp"

ATarget::ATarget(){}

ATarget::ATarget(std::string const &type): type(type){}
ATarget::~ATarget(){}

ATarget & ATarget::operator=(ATarget const &src){
    type = src.type;
    return *this;
}
ATarget::ATarget(ATarget const &src){
    operator=(src);
}

std::string const & ATarget::getType() const{
    return type;
}

void ATarget::getHitBySpell(ASpell const &spell) const{
    std::cout << getType() << " has been " << spell.getEffects() << "!" << std::endl; 
}