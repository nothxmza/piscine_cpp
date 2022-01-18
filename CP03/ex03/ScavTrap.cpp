#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl;
    this->Hitpoints = 100;
    this->Energy_points= 50;
    this->Attack_damage = 20;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "ScavTrap  constructor called" << std::endl;
    this->setName(name);
    this->Hitpoints = 100;
    this->Energy_points= 50;
    this->Attack_damage = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructeur called" << std::endl;
}

/*ScavTrap::ScavTrap(ScavTrap const & src)
{
    std::cout << "Scavtrap Copy constructor called" <<std::endl;
    *this = src;
    return;
}
ScavTrap & ScavTrap::operator=(ScavTrap const & rhs)
{
    std::cout << "Scavtrap Assignation operator called" << std::endl;
    this->name = rhs.name;
    return *this;
}*/

void ScavTrap::attack(std::string const & target)
{
	std::cout << "ScavTrap " << getName() << " attack " << target << " causing " << this->getAttack_damage()<< " points of damage!"<< std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
	std::cout << "ScavTrap " << getName() << " a pris " << amount << " de degat" << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
{
	std::cout << "ScavTrap " << getName() << " a recupere " << amount << " hp" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << this->getName() << "ScavTrap have enterred in Gate keeper mode." << std::endl;
}

int ScavTrap::getHitpoints(void) const
{
	return this->Hitpoints;
}

int ScavTrap::getEnergy_points(void) const
{
	return this->Energy_points;
}

int ScavTrap::getAttack_damage(void) const
{
	return this->Attack_damage;
}
std::string	ScavTrap::getName() const 
{
	return this->name;
}