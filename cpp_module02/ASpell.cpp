#include "ASpell.hpp"

ASpell::ASpell(){}

ASpell::ASpell(std::string const &name, std::string const &effects): name(name), effects(effects){}
ASpell::~ASpell(){}

ASpell & ASpell::operator=(ASpell const &src){
    name = src.name;
    effects = src.effects;
    return *this;
}
ASpell::ASpell(ASpell const &src){
    operator=(src);
}

std::string const & ASpell::getName() const
{
    return name;
}

std::string const & ASpell::getEffects() const
{
    return effects;
}

void ASpell::launch(ATarget const &target) const{
    target.getHitBySpell(*this);
}
