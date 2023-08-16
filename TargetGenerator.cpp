#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {} ;

TargetGenerator::~TargetGenerator() {} ;

void TargetGenerator::learnTargetType(ATarget *obj) {
    if (obj)
        this->target[obj->getType()] = obj;
}

void TargetGenerator::forgetTargetType(std::string const &obj) {
    if (this->target.find(obj) != this->target.end())
        this->target.erase(this->target.find(obj));
}

ATarget* TargetGenerator::createTarget(std::string const &obj) {
    ATarget* tmp = NULL;
    if (this->target.find(obj) != this->target.end())
        tmp = this->target[obj];
    return tmp;
}