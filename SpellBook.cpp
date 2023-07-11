#include "SpellBook.hpp"

SpellBook::~SpellBook(void) {
	for (std::map<std::string, ASpell*>::iterator it = this->s.begin(); it != this->s.end(); it++)
		delete it->second;
	this->s.clear();
}

void SpellBook::learnSpell(ASpell *spell) {
	if (spell)
		this->s[spell->getName()] = spell->clone();
}

void     SpellBook::forgetSpell(std::string const &spell) {
	std::map<std::string, ASpell*>::iterator it = this->s.find(spell);
	if (it != this->s.end()) {
		delete it->second;
		this->s.erase(it);
	}
}

ASpell	*SpellBook::createSpell(std::string const &spell) {
	if (this->s[spell])
		return this->s[spell]->clone();
	return NULL;
}

//Public

SpellBook::SpellBook(void){}

SpellBook::SpellBook(SpellBook const &rhs) {
	*this = rhs;
}

SpellBook &SpellBook::operator=(SpellBook const &rhs) {
	this->s = rhs.s;
	return *this;
}
