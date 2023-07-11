#ifndef F
#define F
#include <iostream>
#include <string>
#include "ASpell.hpp"

class Fwoosh : public ASpell{
	public :
				Fwoosh(void);
				virtual ~Fwoosh(void);

				virtual ASpell *clone(void) const;
};

#endif 
