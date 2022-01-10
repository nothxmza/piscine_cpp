#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public :
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap const & src);
		FragTrap & operator=(FragTrap const & rhs);
		~FragTrap(void);
		void testattack(std::string const & target);
		void highFivesGuys(void);

	};

#endif