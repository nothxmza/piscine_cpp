#include <iostream>

class ClapTrap
{
	public :
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap::ClapTrap(ClapTrap const & src);
		ClapTrap & ClapTrap::operator=(ClapTrap const & rhs);
		~ClapTrap(void);
		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

	private :
		std::string name;
		int Hitpoints;
		int Energy_points;
		int Attack_damage;
};