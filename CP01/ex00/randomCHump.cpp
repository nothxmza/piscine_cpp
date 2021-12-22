#include <iostream>
#include "Zombie.hpp"

void randomChump( std::string name )
{
	Zombie x3;
	x3.setName(name);
	x3.announce();
}