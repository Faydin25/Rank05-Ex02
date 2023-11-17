#pragma once

#include <iostream>
#include "ATarget.hpp"
#include "ASpell.hpp"
#include <map>
#include "SpellBook.hpp"

class Warlock
{
    public:
        Warlock(const std::string& name, const std::string& title);
        ~Warlock();
        const std::string& getName() const;
        const std::string& getTitle() const;
        void setTitle(const std::string& title);
        void introduce() const;
        void learnSpell(ASpell *obj);
        void forgetSpell(std::string name);
        void launchSpell(std::string name, ATarget const &obj);

    private:
        std::string name;
        std::string title;
        SpellBook spell;
};