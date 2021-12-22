#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanA
{
	public:
		HumanA(std::string name,Weapon& type);
		void attack();
	private:
		std::string name;
		Weapon* type;

};

#endif