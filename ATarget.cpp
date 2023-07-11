#include "ATarget.hpp"

//Private
ATarget::ATarget(std::string const &type) : type(type) {}

ATarget::~ATarget(void) {}

std::string const &ATarget::getType(void) const {
	return this->type;
}

ATarget::ATarget(void){}

ATarget::ATarget(ATarget const &rhs) {
	*this = rhs;
}

ATarget &ATarget::operator=(ATarget const &rhs) {
	this->type = rhs.type;
	return *this;
}

void    ATarget::getHitBySpell(ASpell const &spell) const{
	std::cout << this->type << " has been " << spell.getEffects() << "!\n";
}

