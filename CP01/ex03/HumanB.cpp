#include "HumanB.hpp"

HumanB::HumanB(std::string name): type(NULL),name(name)
{
	this->name = name;
}

HumanB::~HumanB()
{
	;
}

void HumanB::setWeapon(Weapon& name)
{
	this->type = &name;
}

void HumanB::attack()
{
	std::cout << this->name << " attacks with his " << this->type->getType() << std::endl;
}