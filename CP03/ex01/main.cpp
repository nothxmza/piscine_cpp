#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap test("lala");
	test.attack("pop");
	test.takeDamage(100);
	test.beRepaired(900000);
}