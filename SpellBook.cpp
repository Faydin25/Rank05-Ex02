#include "SpellBook.hpp"

SpellBook::SpellBook() {} ;

SpellBook::~SpellBook() {} ;

SpellBook& SpellBook::operator=(SpellBook const &obj) {
    this->spell = obj.spell;
    return *this;
}

void SpellBook::learnSpell(ASpell *obj) {
    if (obj)
        this->spell[obj->getName()] = obj;
}

void SpellBook::forgetSpell(std::string const &name) {
    if (this->spell.find(name) != this->spell.end())
        this->spell.erase(this->spell.find(name));
}

ASpell* SpellBook::createSpell(std::string const &name) {
    ASpell* tmp = NULL;
    if (this->spell.find(name) != this->spell.end())
        tmp = this->spell[name];
    return tmp;
}