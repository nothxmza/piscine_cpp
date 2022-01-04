#include "Fragtrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	std::cout << "default constructor Frag called" << std::endl;
	this->setHitpoints(100);
	this->setEnergy_points(100);
	this->setAttack_damage(30);
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Fragtrap construcxtor called" << std::endl;
	this->setHitpoints(100);
	this->setEnergy_points(100);
	this->setAttack_damage(30);
}

FragTrap::FragTrap(FragTrap const & src)
{
	std::cout << "Copy constructor  frag called" << std::endl;
	*this = src;
	return;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const & rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	this->name = rhs.name;
	return *this;
}

void FragTrap::testattack(std::string const & target)
{
	std::cout << this->getName() << " inflige " << this->getAttack_damage() << " points de degat a " << target << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::string rep;
	std::cout << " you want high fives" << std::endl;
	std::cin >> rep;
	if(rep == "yes")
		std::cout << "yeah go high fives" <<std::endl;
	else
		std::cout << "i dont want" << std::endl;
}