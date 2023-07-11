#include "TargetGenerator.hpp"

//Private
//

TargetGenerator::~TargetGenerator(void) {
	for (std::map<std::string, ATarget*>::iterator it = this->s.begin(); it != this->s.end(); it++)
		delete it->second;
	this->s.clear();
}

void TargetGenerator::learnTargetType(ATarget *target) {
	if (target)
		this->s[target->getType()] = target->clone();
}

void     TargetGenerator::forgetTargetType(std::string const &target) {
	std::map<std::string, ATarget*>::iterator it = this->s.find(target);
	if (it != this->s.end()) {
		delete it->second;
		this->s.erase(it);
	}
}

ATarget	*TargetGenerator::createTarget(std::string const &target) {
	if (this->s[target])
		return this->s[target]->clone();
	return NULL;
}

//Public

TargetGenerator::TargetGenerator(void){}

TargetGenerator::TargetGenerator(TargetGenerator const &rhs) {
	*this = rhs;
}

TargetGenerator &TargetGenerator::operator=(TargetGenerator const &rhs) {
	this->s = rhs.s;
	return *this;
}
