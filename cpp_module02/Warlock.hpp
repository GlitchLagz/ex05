#pragma once

#include <iostream>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include <map>

class Warlock{
    private:
        std::string name;
        std::string title;
        std::map < std::string, ASpell * > _SpellBook;
        Warlock();
        Warlock(Warlock const &src);
        Warlock & operator=(Warlock const &src);
    public:
        Warlock(std::string const &name, std::string const &title);
        ~Warlock();
        std::string const & getName() const;
         std::string const & getTitle() const;
        void setTitle(std::string const &str);
        void introduce() const;
        void learnSpell(ASpell* spell);
        void forgetSpell(std::string spell);
        void launchSpell(std::string spell, ATarget const &target);
};