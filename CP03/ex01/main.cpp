#include "ClapTrap.hpp"
#include "ScavTrap.hpp"


int main(void)
{
	
	//ClapTrap t("appp");
	ScavTrap k("lalalallallaqpppp");
	ScavTrap x("lqpppp");
	x = k;
	x.attack("ll");
	x.beRepaired(100);
	std::cout << x.getName()  << std::endl;
}