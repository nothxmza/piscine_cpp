#include "Zombie.hpp"
#include <iostream>

Zombie* zombieHorde( int N, std::string name );


int main()
{
	Zombie* zombie;
	int n = 5;
	int i = 0;
	std::string name = "100";
	zombie = zombieHorde(n,name);
	while(n > i)
		zombie[i++].announce();
	delete [] zombie;
}