#pragma once

#include <iostream>
#include "ATarget.hpp"
#include "ASpell.hpp"
#include <map>

class SpellBook
{
    public:
        SpellBook();
        ~SpellBook();
        void learnSpell(ASpell *obj);
        void forgetSpell(std::string const &name);
        ASpell* createSpell(std::string const &name);

    private:
        std::map<std::string, ASpell *> spell;
};