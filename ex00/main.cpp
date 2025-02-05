#include "ClapTrap.hpp"

int main()
{
	{
        int standardAttackDamage = 3;
        std::string name = "Marvin";
		ClapTrap unnamed;
		ClapTrap marvin(name);

        unnamed.setAttackDamage(standardAttackDamage);
        marvin.setAttackDamage(standardAttackDamage);
        std::cout << std::endl;
		unnamed.attack("Marvin");
		marvin.takeDamage(standardAttackDamage);
        marvin.beRepaired(standardAttackDamage);
        marvin.attack("Unnamed");
        unnamed.takeDamage(standardAttackDamage);
        marvin.attack("Unnamed");
        unnamed.takeDamage(standardAttackDamage * 2);
        unnamed.beRepaired(standardAttackDamage);
        for(int i = 0; i < 9; i++)
        {
            unnamed.attack("Marvin");
            marvin.takeDamage(standardAttackDamage);
        }
        unnamed.beRepaired(standardAttackDamage);
        unnamed.beRepaired(standardAttackDamage);
        marvin.attack("Unnamed");
        std::cout << std::endl;
        marvin.checkStatus();
        std::cout << std::endl;
        unnamed.checkStatus();
        std::cout << std::endl;
	}
	return (0);
}