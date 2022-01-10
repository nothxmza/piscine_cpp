#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
	this->Hitpoints = 10;
	this->Energy_points = 10;
	this->Attack_damage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap constructor called" <<  this->name << std::endl;
	this->name = name;
	this->Hitpoints = 10;
	this->Energy_points = 10;
	this->Attack_damage = 0;
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
	std::cout << "ClapTrap " << this->name << " attack " << target << " causing " << this->Hitpoints << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->name << " a pris " << amount << " de degat" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << this->name << " a recupere " << amount << " hp" << " et " << this->Energy_points << " Energy_points"<< std::endl;
}