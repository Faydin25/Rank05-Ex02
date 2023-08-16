#pragma once

#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell
{
    public:
        ASpell(std::string name, std::string effects);
        virtual ~ASpell();
        ASpell &operator=(ASpell const &obj);
        std::string getName() const;
        std::string getEffects() const;
        virtual ASpell* clone() const=0;
        void launch(ATarget const &obj) const;
    protected:
        std::string name;
        std::string effects;
};