#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("Unnamed")
{
	std::cout << "ClapTrap " << name << " is Constructed." << std::endl;
}

ClapTrap::ClapTrap(std::string &name) : name(name)
{
	std::cout << "ClapTrap " << name << " is Constructed." << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << name << " is destroyed." << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &copy)
{
	if (this != &copy)
	{
		name = copy.name;
		hitPoints = copy.hitPoints;
		energyPoints = copy.energyPoints;
		attackDamage = copy.attackDamage;
	}
	std::cout << "ClapTrap " << name << "assignment made." << std::endl;
	return (*this);
}

ClapTrap::ClapTrap(const ClapTrap &copy) : name(copy.name),
	hitPoints(copy.hitPoints), energyPoints(copy.energyPoints),
	attackDamage(copy.attackDamage)
{
	*this = copy;
	std::cout << "ClapTrap " << name << " copyied." << std::endl;
};

void ClapTrap::attack(const std::string &target)
{
}