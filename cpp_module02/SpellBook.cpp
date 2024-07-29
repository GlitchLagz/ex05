#include "SpellBook.hpp"

SpellBook::SpellBook(){}

SpellBook::~SpellBook(){}

SpellBook & SpellBook::operator=(SpellBook const &src){
    _SpellBook = src._SpellBook;
    return *this;
}
SpellBook::SpellBook(SpellBook const &src){
    operator=(src);
}

void SpellBook::learnSpell(ASpell* spell){
    if (spell)
        _SpellBook[spell->getName()] = spell->clone();
}

void SpellBook::forgetSpell(std::string const &spell){
    std::map<std::string, ASpell*>::iterator it = _SpellBook.find(spell);
    if (it != _SpellBook.end())
        delete it->second;
    _SpellBook.erase(it);
}

ASpell* SpellBook::createSpell(std::string const &spell){
    ASpell* res = NULL;
    if (_SpellBook.find(spell) != _SpellBook.end())
        res = _SpellBook[spell];
    return res;
}