#include "Fragtrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
    std::cout << "constructor Frag called" << std::endl;
}

FragTrap::FragTrap(FragTrap const & src)
{
    std::cout << "Copy constructor  frag called" << std::endl;
    *this = src;
    return;
}

FragTrap::~FragTrap()
{
    std::cout << "destructor frag called" << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const & rhs)
{
    std::cout << "Assignation operator called" << std::endl;
    this->name = rhs.name;
    return *this;
}