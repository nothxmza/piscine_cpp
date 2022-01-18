#include "Fragtrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    FragTrap	FragTrap1("Jeremy");
	FragTrap	FragTrap2("Hamza");
	FragTrap2.attack(FragTrap1.getName());
	FragTrap1.takeDamage(FragTrap2.getAttack_damage());
	FragTrap1.highFivesGuys();

}