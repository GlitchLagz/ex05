#pragma once
#include <string>
#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell{
    protected:
        std::string name;
        std::string effects;
        ASpell();
        ASpell& operator=(ASpell const &src);
        ASpell(ASpell const &src);
    public:
        ASpell(std::string const &name, std::string const &effects);
        virtual ~ASpell();

        std::string const& getName() const;
        std::string const& getEffects() const;
        virtual ASpell* clone() const = 0;
        void launch(ATarget const &target) const;

};