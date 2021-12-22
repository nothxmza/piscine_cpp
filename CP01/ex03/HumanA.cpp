#include "HumanA.hpp"

HumanA::HumanA(std::string name,Weapon& type)
{
	this->name = name;
	this->type = &type;
}

void HumanA::attack()
{
	std::cout << this->name << " attacks with his " << this->type->getType() << std::endl;
}
