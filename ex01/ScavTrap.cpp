#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
    std::cout << YELLOW << "ScavTrap " << name << " is Constructed." << RESET << std::endl;
}

ScavTrap::ScavTrap(std::string &name) : ClapTrap(name)
{
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
    std::cout << YELLOW << "ScavTrap " << name << " is Constructed." << RESET << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
    *this = copy;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &copy)
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

ScavTrap::~ScavTrap()
{
    std::cout << RED << "ScavTrap " << name << " is destroyed." << RESET << std::endl;
}

// Member Functions
void ScavTrap::attack(const std::string &target)
{
	if (isDead())
		return ;
	if (isOutOfEnergy())
		return ;
	if(energyPoints - 1 < 0)
		energyPoints = 0;
	else
		energyPoints = energyPoints - 1;
	std::cout << BLUE << "ScavTrap " << name << " attacks " << target << ", causing " << RESET;
	std::cout << BLUE << attackDamage << " points of damage!" << RESET << std::endl;
	return ;
}

void ScavTrap::guardGate()
{
    if(guardingGate == false)
    {
        guardingGate = true;
        std::cout << GREEN << "ScavTrap " << name << " is set to Gate guarding mode." << RESET << std::endl;
    }
    else
    {
        std::cout << GREEN << "ScavTrap " << name << "is already guaring the Gate." << RESET << std::endl;
    }
}
