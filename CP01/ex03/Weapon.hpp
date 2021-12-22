#ifndef WEAPEON_HPP
# define WEAPEON_HPP

#include <iostream>
#include <string>

class Weapon
{
	public:
		Weapon() {};
		Weapon(std::string name);
		void setType(std::string type);
		std::string const & getType() const;

	private:
		std::string type;

};

#endif