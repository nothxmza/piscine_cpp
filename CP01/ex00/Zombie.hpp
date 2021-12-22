#ifndef ZOMBIE_CPP
#define ZOMBIE_CPP

#include <string>

class Zombie
{
	public:
		~Zombie();
		void announce();
		void setName(std::string name);
		void randomChump( std::string name );

	private:
		std::string name;
};

#endif