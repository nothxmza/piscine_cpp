#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	public :
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const & src);
		ClapTrap & operator=(ClapTrap const & rhs);
		~ClapTrap(void);
		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		int getHitpoints(void) const;
		int getEnergy_points(void) const;
		int getAttack_damage(void) const;
		void setHitpoints(int n);
		void setEnergy_points(int n);
		void setAttack_damage(int n);
		std::string getName();
		void test(void);
		void	setName(std::string name);

	protected :
			std::string name;
			int Hitpoints;
			int Energy_points;
			int Attack_damage;
		
		
};

#endif