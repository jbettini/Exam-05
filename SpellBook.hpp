#ifndef SB
#define SB
#include <iostream>
#include <string>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include <map>

class SpellBook {
	public :

				SpellBook(void);
				~SpellBook(void);

				void	 learnSpell(ASpell *spell);
				void	 forgetSpell(std::string const &spell);
				ASpell* createSpell(std::string const &spell);
	private :
				std::map<std::string, ASpell *> s;

				SpellBook(SpellBook const &rhs);
				SpellBook &operator=(SpellBook const &rhs);
};

#endif 
