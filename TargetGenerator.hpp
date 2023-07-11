#ifndef G
#define G
#include <iostream>
#include <string>
#include "ATarget.hpp"
#include "ATarget.hpp"
#include <map>

class TargetGenerator {
	public :

				TargetGenerator(void);
				~TargetGenerator(void);

				void	 learnTargetType(ATarget *target);
				void	 forgetTargetType(std::string const &target);
				ATarget* createTarget(std::string const &target);
	private :
				std::map<std::string, ATarget *> s;

				TargetGenerator(TargetGenerator const &rhs);
				TargetGenerator &operator=(TargetGenerator const &rhs);
};

#endif 
