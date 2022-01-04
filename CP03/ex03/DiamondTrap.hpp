#ifndef DIAMONTRAP_HPP
# define DIAMONTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"
#include "Fragtrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	public :
		DiamondTrap(void);
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap const & src);
		DiamondTrap & operator=(DiamondTrap const & rhs);
		~DiamondTrap(void);
		void WhoAmI();


	private :
		std::string name;

};


#endif