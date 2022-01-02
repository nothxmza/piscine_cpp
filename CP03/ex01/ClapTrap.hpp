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
		void test();

	protected :
			std::string name;

	private :
		int Hitpoints;
		int Energy_points;
		int Attack_damage;
		
};

//std::ostream&	operator<<(std::ostream& ofs, ClapTrap const & rhs);

#endif