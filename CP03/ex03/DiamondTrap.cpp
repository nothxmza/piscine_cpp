#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ScavTrap(), FragTrap()
{
	std::cout << "diamond default constrcutor called" << std::endl;
	std::cout << "FragTrap Hitpoint: " <<FragTrap::getHitpoints() << "; Scavtrap Energy_points: " << ScavTrap::getEnergy_points() << "; Fragtrap attack damage : " << FragTrap::getAttack_damage() << "; " <<  std::endl;
	//this->ClapTrap::setHitpoints(FragTrap::getHitpoints());
	
}

DiamondTrap::DiamondTrap(std::string name) : ScavTrap(name), FragTrap(name)
{
	std::cout << "diamond cosntructor called" << std::endl;
	this->name = name;
	

}
DiamondTrap::DiamondTrap(DiamondTrap const & src)
{
	std::cout << "diamond copy constructor called" << std::endl;
	*this = src;
	return;
}
DiamondTrap & DiamondTrap::operator=(DiamondTrap const & rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	this->name = rhs.name;
	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "diamond destrcutor called" << std::endl;
}

void	DiamondTrap::attack(std::string const & target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::WhoAmI()
{
	std:: cout << this->name <<   std::endl;
}