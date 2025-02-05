#include "ScavTrap.hpp"

int main()
{
	{
        std::string name = "ScavMarvin";
		ScavTrap scavMarvin(name);
		ScavTrap scavUnnamed;
		scavMarvin.attack("Samurai");
		scavUnnamed.takeDamage(20);
		scavMarvin.guardGate();
	}
	return (0);
}