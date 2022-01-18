#ifndef DIAMONTRAP_HPP
# define DIAMONTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	public :
		DiamondTrap(void);
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap const & src);
		DiamondTrap & operator=(DiamondTrap const & rhs);
		~DiamondTrap(void);
		void whoAmI();
		void attack(std::string const & target);
		std::string getName() const;
		void	setName(std::string name);
		int getHitpoints(void) const;
		int getEnergy_points(void) const;
		int getAttack_damage(void) const;


	private :
		std::string name;
		int Hitpoints;
		int Energy_points;
		int Attack_damage;

};


#endif