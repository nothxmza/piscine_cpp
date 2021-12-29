#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "destructeur called" << std::endl;
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