#ifndef S
#define S
#include <iostream>
#include <string>
#include "ATarget.hpp"

class ATarget;

class ASpell{
	public :
				ASpell(void);
				ASpell(ASpell const &rhs);
				ASpell &operator=(ASpell const &rhs);
				ASpell(std::string const &name, std::string const &effects);
				virtual ~ASpell(void);

				std::string const &getName(void) const;
				std::string const &getEffects(void) const;

				void	launch(ATarget const &target) const;
				
				virtual ASpell *clone(void) const = 0;

	protected :
				std::string name;
				std::string effects;

};

#endif 
