#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap t("pppppppp");
	ScavTrap x("nom");
	t.ScavTrap::attack("lala");
	x.attack("waaa");
	t.WhoAmI();
}