#pragma once

#include <iostream>
#include "ATarget.hpp"
#include <map>
class ATarget;

class SpellBook{
    private:
        std::map<std::string, ASpell*> _SpellBook;
        SpellBook & operator=(SpellBook const &src);
        SpellBook(SpellBook const &src);

    public:
        SpellBook();
        ~SpellBook();
        void learnSpell(ASpell* spell);
        void forgetSpell(std::string const &spell);
        ASpell* createSpell(std::string const &spell);
        
};