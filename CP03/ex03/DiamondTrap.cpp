# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ScavTrap(), FragTrap()
{
	std::cout << "diamond default constrcutor called" << std::endl;
	this->Attack_damage = FragTrap::getAttack_damage();
	this->Energy_points = ScavTrap::getEnergy_points();
	this->Hitpoints = ScavTrap::getHitpoints();
}

DiamondTrap::DiamondTrap(std::string name) : ScavTrap(name), FragTrap(name)
{
	std::cout << "diamond cosntructor called" << std::endl;
	this->setName(name);
	ClapTrap::setName(name + "_clap_name");
	this->Attack_damage = FragTrap::getAttack_damage();
	this->Energy_points = ScavTrap::getEnergy_points();
	this->Hitpoints = ScavTrap::getHitpoints();
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
	std::cout << "DiamondTrap destrcutor called" << std::endl;
}

void	DiamondTrap::attack(std::string const & target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std:: cout << this->name << ClapTrap::getName() << std::endl;
}

void	DiamondTrap::setName(std::string name) 
{
	std::cout << "setName1 = " << name << std::endl;
	this->name = name;
}

std::string DiamondTrap::getName() const
{
	return this->name;
}

int  DiamondTrap::getHitpoints(void) const
{
	return this->Hitpoints;
}

int  DiamondTrap::getEnergy_points(void) const
{
	return this->Energy_points;
}

int  DiamondTrap::getAttack_damage(void) const
{
	return this->Attack_damage;
}