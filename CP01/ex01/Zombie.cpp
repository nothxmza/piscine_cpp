#include "Zombie.hpp"
#include <iostream>

Zombie::~Zombie()
{
	std::cout << this->name << " is dead" << std::endl;
}

void Zombie::announce()
{
	std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setZombie(std::string name)
{
	this->name = name;
}
