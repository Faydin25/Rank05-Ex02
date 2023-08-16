#include "ATarget.hpp"

ATarget::ATarget(std::string type) {
    this->type = type;
}

ATarget::~ATarget() {} ;


std::string ATarget::getType() const {
    return this->type;
}

ATarget &ATarget::operator=(ATarget const &obj) {
    this->type = obj.getType();
    return *this;
}

void ATarget::getHitBySpell(ASpell const &obj) const {
    std::cout << this->type + " has been " + obj.getEffects() + "!" << std::endl;
}