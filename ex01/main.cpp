#include "ScavTrap.hpp"

int main()
{
	{
        std::string name = "ScavMarvin";
		ScavTrap scavMarvin(name);
		ScavTrap scavUnnamed;
		scavMarvin.attack("Unnamed");
		scavUnnamed.takeDamage(20);
		scavUnnamed.beRepaired(12);
		scavMarvin.guardGate();
		for(int i = 0; i < 7; i++)
		{
			scavUnnamed.attack("ScavMarvin");
			scavMarvin.beRepaired(1);
			scavMarvin.takeDamage(20);
		}
		std::cout << std::endl;
        scavMarvin.checkStatus();
        std::cout << std::endl;
        scavUnnamed.checkStatus();
        std::cout << std::endl;
	}
	return (0);
}