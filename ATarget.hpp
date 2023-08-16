#pragma once

#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget
{
    public:
        ATarget(std::string type);
        virtual ~ATarget();
        ATarget &operator=(ATarget const &obj);
        std::string getType() const;
        virtual ATarget* clone() const=0;
        void getHitBySpell(ASpell const &obj) const;

    protected:
        std::string type;
};