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
	std::cout << "ClapTrap constructor called "<<  this->name << std::endl;
	this->name = name;
	this->Hitpoints = 10;
	this->Energy_points = 10;
	this->Attack_damage = 0;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
    std::cout << "ClapTrap Copy constructor called" <<std::endl;
    *this = src;
    return;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs)
{
    std::cout << "Assignation operator called" << std::endl;
    this->name = rhs.name;
    return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Claptrap destructor called" << std::endl;
}

void ClapTrap::attack(std::string const & target)
{
	std::cout << "ClapTrap " << getName() << " attack " << target << " causing " << this->Hitpoints << " points of damage!"<< std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << getName() << " a pris " << amount << " de degat" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << getName() << " a recupere " << amount << " hp" << std::endl;
}

void ClapTrap::setHitpoints(int n)
{
	this->Hitpoints = n;
}

void ClapTrap::setEnergy_points(int n)
{
	this->Energy_points = n;
}

void ClapTrap::setAttack_damage(int n)
{
	this->Attack_damage = n;
}

int ClapTrap::getHitpoints(void) const
{
	return this->Hitpoints;
}

int ClapTrap::getEnergy_points(void) const
{
	return this->Energy_points;
}

int ClapTrap::getAttack_damage(void) const
{
	return this->Attack_damage;
}

void ClapTrap::setName(std::string name)
{
	this->name = name;
}

std::string ClapTrap::getName() const
{
	return this->name;
}

void ClapTrap::test()
{
    std::cout <<  getName() << " a " << this->getEnergy_points()  << " Energy point" << " et " << this->getAttack_damage() << " attack damage "  << std::endl;
}