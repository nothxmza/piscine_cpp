#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public :
		FragTrap(void);
		FragTrap(std::string name);
		//FragTrap(FragTrap const & src);
		//FragTrap & operator=(FragTrap const & rhs);
		~FragTrap(void);
		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void highFivesGuys(void);
		void beRepaired(unsigned int amount);

	};

#endif