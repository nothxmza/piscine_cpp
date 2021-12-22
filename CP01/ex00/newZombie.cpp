#include "Zombie.hpp"
#include <iostream>

Zombie* newZombie( std::string name )
{
	Zombie* x2 = new Zombie;
	x2->setName(name);
	return x2;
}