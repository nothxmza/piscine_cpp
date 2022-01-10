#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl;
    this->setHitpoints(100);
    this->setEnergy_points(50);
    this->setAttack_damage(20);
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap  constructor called" << std::endl;
    this->setHitpoints(100);
    this->setEnergy_points(50);
    this->setAttack_damage(20);
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
	std::cout << "ScavTrap " << getName() << " attack " << target << " causing " << this->getHitpoints()<< " points of damage!"<< std::endl;
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
    std::cout << "ScavTrap have enterred in Gate keeper mode." << std::endl;
}