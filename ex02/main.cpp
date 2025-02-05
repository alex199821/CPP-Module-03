#include "FragTrap.hpp"

int main()
{
	{
        std::string name = "FragMarvin";
		FragTrap fragMarvin(name);
		FragTrap fragUnnamed;
		fragMarvin.attack("Unnamed");
		fragUnnamed.takeDamage(30);
		fragUnnamed.beRepaired(12);
		fragMarvin.highFivesGuys();
		for(int i = 0; i < 3; i++)
		{
			fragMarvin.attack("FragMarvin");
			fragUnnamed.beRepaired(1);
			fragUnnamed.takeDamage(30);
		}
		fragUnnamed.highFivesGuys();
		std::cout << std::endl;
        fragMarvin.checkStatus();
        std::cout << std::endl;
        fragUnnamed.checkStatus();
        std::cout << std::endl;
	}
	return (0);
}