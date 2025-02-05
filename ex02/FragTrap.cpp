#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
    std::cout << YELLOW << "FragTrap " << name << " is Constructed." << RESET << std::endl;
}

FragTrap::FragTrap(std::string &name) : ClapTrap(name)
{
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
    std::cout << YELLOW << "FragTrap " << name << " is Constructed." << RESET << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
    *this = copy;
}

FragTrap &FragTrap::operator=(const FragTrap &copy)
{
    if (this != &copy)
    {
        name = copy.name;
        hitPoints = copy.hitPoints;
        energyPoints = copy.energyPoints;
        attackDamage = copy.attackDamage;
    }
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << RED << "FragTrap " << name << " is destroyed." << RESET << std::endl;
}

// Member Functions

void FragTrap::highFivesGuys()
{
    if (isDead())
		return ;
	if (isOutOfEnergy())
		return ;
    std::cout << GREEN << "FragTrap " << name << " just high fived the enemies. Unexpected Friendly Gesture!" << RESET << std::endl;
}
