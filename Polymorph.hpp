#ifndef P
#define P
#include <iostream>
#include <string>
#include "ASpell.hpp"

class Polymorph : public ASpell{
	public :
				Polymorph(void);
				virtual ~Polymorph(void);

				virtual ASpell *clone(void) const;
};

#endif 
