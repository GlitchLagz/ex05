#pragma once

#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget{
    private:
        std::string type;
    public:
        ATarget();
        ATarget & operator=(ATarget const &src);
        ATarget(ATarget const &src);
        ATarget(std::string const &type);
        virtual ~ATarget();
        std::string const & getType() const;
        virtual ATarget* clone() const = 0;
        void getHitBySpell(ASpell const &spell) const;
        
};