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

ClapTrap::~ClapTrap()
{
	std::cout << "destructor called" << std::endl;
}

void ClapTrap::attack(std::string const & target)
{
	std::cout << "ClapTrap " << this->name << " attack " << target << " causing " << this->Hitpoints << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->name << " a pris " << amount << " de degat" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << this->name << " a recupere " << amount << " de hp" << std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs)
{
    std::cout << "Assignation operator called" << std::endl;
    this->name = rhs.name;
    return *this;
}