#ifndef ZOMBIE_CPP
#define ZOMBIE_CPP

#include <string>

class Zombie
{
	public:
		~Zombie();
		void setZombie(std::string name);
		void announce();
		Zombie* zombieHorde( int N, std::string name );

	private:
			std::string name;
};

#endif