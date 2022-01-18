#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
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
		int getHitpoints(void) const;
		int getEnergy_points(void) const;
		int getAttack_damage(void) const;
		std::string	getName() const;

	private:
		int Hitpoints;
		int Energy_points;
		int Attack_damage;

	};

#endif