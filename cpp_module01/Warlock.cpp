#include "Warlock.hpp"

Warlock::Warlock(){}

Warlock::Warlock(std::string const &name, std::string const &title): name(name), title(title){
    std::cout << name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock(){
    std::cout << name << ": My job here is done!" << std::endl;
}
Warlock& Warlock::operator=(Warlock const &src){
    name = src.name;
    title = src.title;
    return *this;
}

Warlock::Warlock(Warlock const &src){
    operator=(src);
}

std::string const & Warlock::getName() const{
    return name;
}
std::string const & Warlock::getTitle() const{
    return title;
}
void Warlock::setTitle(std::string const &src){
    title = src;
}
void Warlock::introduce()const{
    std::cout << name << ": I am " << name << ", " << title << "!" << std::endl;
}

void Warlock::learnSpell(ASpell* spell){
    if (spell)
        if (_Spellbook.find(spell->getName()) == _Spellbook.end())
            _Spellbook[spell->getName()] = spell->clone();
}

void Warlock::forgetSpell(std::string spell){
    if (_Spellbook.find(spell) != _Spellbook.end())
        _Spellbook.erase(_Spellbook.find(spell));
}

void Warlock::launchSpell(std::string spell, ATarget const &target){
    if (_Spellbook.find(spell) != _Spellbook.end()){
        _Spellbook[spell]->launch(target);
    }
}