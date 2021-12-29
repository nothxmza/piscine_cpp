#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap
{
	public:
		ScavTrap(void);
		~ScavTrap(void);
		ScavTrap(ScavTrap const & src);
		ScavTrap & ScavTrap::operator=(ScavTrap const & rhs);

};