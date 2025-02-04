#include "ClapTrap.hpp"

int main()
{
	{
        int standardAttackDamage = 3;
        std::string name = "Marvin";
		ClapTrap unnamed;
		ClapTrap cody(name);

        unnamed.setAttackDamage(standardAttackDamage);
        cody.setAttackDamage(standardAttackDamage);
        std::cout << std::endl;
		unnamed.attack("Marvin");
		cody.takeDamage(standardAttackDamage);
        cody.beRepaired(standardAttackDamage);
        cody.attack("Unnamed");
        unnamed.takeDamage(standardAttackDamage);
        cody.attack("Unnamed");
        unnamed.takeDamage(standardAttackDamage * 2);
        unnamed.beRepaired(standardAttackDamage);
        for(int i = 0; i < 9; i++)
        {
            unnamed.attack("Marvin");
            cody.takeDamage(standardAttackDamage);
        }
        unnamed.beRepaired(standardAttackDamage);
        unnamed.beRepaired(standardAttackDamage);
        cody.attack("Unnamed");
        std::cout << std::endl;
        cody.checkStatus();
        std::cout << std::endl;
        unnamed.checkStatus();
        std::cout << std::endl;
		// a.takeDamage(10);
		// a.beRepaired(5);
		// a.attack("some other other robot");
		// b.beRepaired(3);
		// for (int i = 0; i < 12; i++)
		// 	b.attack("Cody-clone");
		// b.beRepaired(3);
	}
	return (0);
}