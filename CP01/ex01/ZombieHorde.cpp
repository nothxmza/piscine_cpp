#include "Zombie.hpp"
#include <iostream>

Zombie* zombieHorde( int N, std::string name )
{
	int i = 0;
	Zombie* zombie = new Zombie[N];
	while(N > i)
		zombie[i++].setZombie(name);
	return zombie;
}
