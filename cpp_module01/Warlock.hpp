#pragma once
#include <string>
#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"

class ASpell;
class ATarget;

class Warlock{
    private:
        std::string name;
        std::string title;
        Warlock();
        Warlock& operator=(Warlock const &src);
        Warlock(Warlock const &src);
        std::map<std::string, ASpell*> _Spellbook;
    public:
        Warlock(std::string const &name, std::string const &title);
        ~Warlock();

        std::string const& getName() const;
        std::string const& getTitle() const;
        void setTitle(std::string const &src);
        void introduce() const;
        void learnSpell(ASpell* spell);
        void forgetSpell(std::string spell);
        void launchSpell(std::string spell, ATarget const &target);

};