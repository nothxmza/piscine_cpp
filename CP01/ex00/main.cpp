#include "Zombie.hpp"
#include <iostream>
void randomChump( std::string name );
Zombie* newZombie( std::string name );

int main()
{
	std::string name = "Brand";
	std::string name2 = "Nunu";
	Zombie x1;
	Zombie* x2;
	x1.setName(name);
	x1.announce();
	x2 = newZombie(name2);
	x2->announce();
	randomChump("sion");
	delete x2;
}