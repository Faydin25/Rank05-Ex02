#include "Warlock.hpp"

Warlock::Warlock(const std::string& name, const std::string& title) {
    this->name = name;
    this->title = title;
    std::cout << this->getName() + ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock() {
    std::cout << this->getName() + ": My job here is done!" << std::endl;
}

Warlock &Warlock::operator=(Warlock const &obj) {
    this->name = obj.getName();
    this->title = obj.getTitle();
    return *this;
}

const std::string& Warlock::getName() const {
    return this->name;
}

const std::string& Warlock::getTitle() const {
    return this->title;
}

void Warlock::setTitle(const std::string& title) {
    this->title = title;
}

void Warlock::introduce() const {
    std::cout << this->getName() + ": I am " + this->getName() + ", " + this->getTitle() + "!" << std::endl;
}

void Warlock::learnSpell(ASpell *obj) {
    spell.learnSpell(obj);
}

void Warlock::forgetSpell(std::string name) {
    spell.forgetSpell(name);
}

void Warlock::launchSpell(std::string name, ATarget const &obj) {
    ASpell* tmp = NULL;
    if (spell.createSpell(name))
        tmp = spell.createSpell(name);
    tmp->launch(obj);
}