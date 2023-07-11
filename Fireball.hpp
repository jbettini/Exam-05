#ifndef FIRE
#define FIRE
#include <iostream>
#include <string>
#include "ASpell.hpp"

class Fireball : public ASpell{
	public :
				Fireball(void);
				virtual ~Fireball(void);

				virtual ASpell *clone(void) const;
};

#endif 
