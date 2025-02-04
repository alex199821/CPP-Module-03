#include "ClapTrap.hpp"

// Constructors

ClapTrap::ClapTrap() : name("Unnamed")
{
	std::cout << YELLOW << "ClapTrap " << name << " is Constructed." << RESET << std::endl;
}

ClapTrap::ClapTrap(std::string &name) : name(name)
{
	std::cout << YELLOW << "ClapTrap " << name << " is Constructed." << RESET << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << RED << "ClapTrap " << name << " is destroyed." << RESET << std::endl;
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
	std::cout << YELLOW << "ClapTrap " << name << "assignment made." << RESET << std::endl;
	return (*this);
}

ClapTrap::ClapTrap(const ClapTrap &copy) : name(copy.name),
	hitPoints(copy.hitPoints), energyPoints(copy.energyPoints),
	attackDamage(copy.attackDamage)
{
	*this = copy;
	std::cout << YELLOW << "ClapTrap " << name << " copy made." << RESET << std::endl;
};

// Setters
void ClapTrap::setName(const std::string &newName)
{
	std::cout << YELLOW << "ClapTrap " << name << " updated it's name." << RESET << std::endl;
	name = newName;
}

void ClapTrap::setHitPoints(int newHitPoints)
{
	std::cout << YELLOW << "ClapTrap " << name << " has updated hit points to " << newHitPoints << RESET << std::endl;
	hitPoints = newHitPoints;
}

void ClapTrap::setEnergyPoints(int newEnergyPoints)
{
	std::cout << YELLOW << "ClapTrap " << name << " has updated energy points to " << newEnergyPoints << RESET << std::endl;
	energyPoints = newEnergyPoints;
}

void ClapTrap::setAttackDamage(int newAttackDamage)
{
	std::cout << YELLOW << "ClapTrap " << name << " has updated attack damage to " << newAttackDamage << RESET << std::endl;
	attackDamage = newAttackDamage;
}

// Monitor Functions
bool ClapTrap::isDead() const
{
	if (hitPoints == 0)
	{
		std::cout << RED << "ClapTrap " << name << " is dead therefore no actions are possible." << RESET << std::endl;
		return (true);
	}
	return (false);
}

bool ClapTrap::isOutOfEnergy() const
{
	if (energyPoints == 0)
	{
		std::cout << RED << "ClapTrap " << name << " is out of energy." << RESET << std::endl;
		return (true);
	}
	return (false);
}

// Member Functions
void ClapTrap::attack(const std::string &target)
{
	if (isDead())
		return ;
	if (isOutOfEnergy())
		return ;
	if(energyPoints - 1 < 0)
		energyPoints = 0;
	else
		energyPoints = energyPoints - 1;
	std::cout << BLUE << "ClapTrap " << name << " attacks " << target << ", causing " << RESET;
	std::cout << BLUE << attackDamage << " points of damage!" << RESET << std::endl;
	return ;
}

void ClapTrap::takeDamage(int amount)
{
	if (isDead())
	{
		return ;
	}
	else if (amount >= hitPoints)
	{
		hitPoints = 0;
		std::cout << RED << "ClapTrap " << name << " got attacked & took damage of " << amount << RESET;
		std::cout << RED << " points, this caused heroic death in a battle." << RESET << std::endl;
		return ;
	}
	else
	{
		hitPoints = hitPoints - amount;
		std::cout << RED << "ClapTrap " << name << " got attacked and took damage of " << amount << " points." << RESET << std::endl;
		return ;
	}
}

void ClapTrap::beRepaired(int amount)
{
	if (isOutOfEnergy() || isDead())
		return ;
	if(energyPoints - 1 < 0)
		energyPoints = 0;
	else
		energyPoints = energyPoints - 1;
	hitPoints = hitPoints + amount;
	std::cout << GREEN << "ClapTrap " << name << " is repaired by " << amount << " points." << RESET << std::endl;
}

void ClapTrap::checkStatus()
{
	std::cout << "ClapTrap " << name << " has:" << std::endl;
	std::cout << "Hit Points: " << hitPoints << std::endl;
	std::cout << "Energy Points: " << energyPoints << std::endl;
	std::cout << "Attack Damage: " << attackDamage << std::endl;
}