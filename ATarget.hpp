#ifndef T
#define T
#include <iostream>
#include <string>
#include "ASpell.hpp"

class ASpell;

class ATarget{
	public :
				ATarget(void);
				ATarget(ATarget const &rhs);
				ATarget &operator=(ATarget const &rhs);
				ATarget(std::string const &type);
				virtual ~ATarget(void);

				std::string const &getType(void) const;

				void	getHitBySpell(ASpell const &spell) const;
				
				virtual ATarget *clone(void) const = 0;

	protected :
				std::string type;

};

#endif 
