#ifndef W
#define W
#include <iostream>
#include <string>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include <map>
#include "SpellBook.hpp"

class Warlock {
	public :
				Warlock(std::string const &name, std::string const &title);
				~Warlock(void);

				std::string const &getName(void) const;
				std::string const &getTitle(void) const;

				void				setTitle(std::string const &title);

				void				introduce(void) const;

				void	 learnSpell(ASpell *spell);
				void	 forgetSpell(std::string spell);
				void	 launchSpell(std::string spell, ATarget const &target);
	private :
				std::string name;
				std::string title;
				SpellBook	b;

				Warlock(void);
				Warlock(Warlock const &rhs);
				Warlock &operator=(Warlock const &rhs);
};

#endif 
