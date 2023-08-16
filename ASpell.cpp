#include "ASpell.hpp"

ASpell::ASpell(std::string name, std::string effects) {
    this->name = name;
    this->effects = effects;
}

ASpell& ASpell::operator=(ASpell const &obj) {
    this->name = obj.getName();
    this->effects = obj.getEffects();
    return *this;
}

ASpell::~ASpell() {} ;

std::string ASpell::getName() const {
    return this->name;
}

std::string ASpell::getEffects() const {
    return this->effects;
}

void ASpell::launch(ATarget const &obj) const {
    obj.getHitBySpell(*this);
}