#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	this->Hitpoints = 10;
	this->Energy_points = 10;
	this->Attack_damage = 0;
}
ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	this->Hitpoints = 10;
	this->Energy_points = 10;
	this->Attack_damage = 0;
	std::cout << "pret pour le combat" <<" "<<  this->name << std::endl;
}
ClapTrap::ClapTrap(ClapTrap const & src)
{
    std::cout << "Copy constructor called" <<std::endl;
    *this = src;
    return;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs)
{
    std::cout << "ClapTrap Assignation operator called" << std::endl;
    this->name = rhs.name;
    return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "destructor called" << std::endl;
}

void ClapTrap::attack(std::string const & target)
{
	std::cout << "ClapTrap " << getName() << " attack " << target << " causing " << this->Hitpoints << "points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << getName() << " a pris " << amount << " de degat" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << getName() << " a recupere " << amount << " hp" << std::endl;
}

std::string ClapTrap::getName()
{
	return this->name;
}