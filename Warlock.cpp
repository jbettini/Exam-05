#include "Warlock.hpp"

//Private
//
Warlock::Warlock(std::string const &name, std::string const &title) : name(name), title(title) {
	std::cout << this->name << ": This looks like another boring day.\n";
}

Warlock::~Warlock(void) {
	std::cout << this->name << ": My job here is done!\n";
}

std::string const &Warlock::getName(void) const {
	return this->name;
}

std::string const &Warlock::getTitle(void) const {
	return this->title;
}

void                Warlock::setTitle(std::string const &title) {
	this->title = title;
}

void                Warlock::introduce(void) const {
	std::cout << this->name << ": I am " << this->name << ", " << this->title << "!\n";
}

void Warlock::learnSpell(ASpell *spell) {
	this->b.learnSpell(spell);
}

void     Warlock::forgetSpell(std::string spell) {
	this->b.forgetSpell(spell);
}

void	Warlock::launchSpell(std::string spell, ATarget const &target) {
	ASpell *toLaunch = this->b.createSpell(spell);
	if (toLaunch)
		toLaunch->launch(target);
}

//Public

Warlock::Warlock(void){}

Warlock::Warlock(Warlock const &rhs) {
	*this = rhs;
}

Warlock &Warlock::operator=(Warlock const &rhs) {
	this->name = rhs.name;
	this->title = rhs.title;
	return *this;
}
