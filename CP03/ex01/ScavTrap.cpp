#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->name = name;
    std::cout << this->name << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "destructeur called 2" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & src)
{
    std::cout << "Copy constructor called" <<std::endl;
    *this = src;
    return;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs)
{
    std::cout << "Assignation operator called" << std::endl;
    this->name = rhs.name;
    return *this;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap have enterred in Gate keeper mode." << std::endl;
}
