#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"


class ScavTrap : public virtual ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		~ScavTrap(void);
		//ScavTrap(ScavTrap const & src);
		//ScavTrap & operator=(ScavTrap const & rhs);
		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void guardGate();

		int getHitpoints(void) const;
		int getEnergy_points(void) const;
		int getAttack_damage(void)const;
		std::string	getName() const;

	private:
		int Hitpoints;
		int Energy_points;
		int Attack_damage;
};

#endif