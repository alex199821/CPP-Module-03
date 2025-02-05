#pragma once

# include <cctype>
# include <iomanip>
# include <ios>
# include <iostream>
# include <ostream>
# include <sstream>
# include <string>

const std::string RESET = "\033[0m";
const std::string RED = "\033[31m";
const std::string GREEN = "\033[32m";
const std::string YELLOW = "\033[38;5;214m";
const std::string BLUE = "\033[38;5;129m";

class ClapTrap
{
  protected:
	std::string name;
	int hitPoints = 10;
	int energyPoints = 10;
	int attackDamage = 0;

  public:
	// Constructors
	ClapTrap();
	ClapTrap(std::string &name);
	ClapTrap(const ClapTrap &copy);
	ClapTrap &operator=(const ClapTrap &copy);
	~ClapTrap();
	// Setters
	void setName(const std::string &newName);
	void setHitPoints(int newHitPoints);
	void setEnergyPoints(int newEnergyPoints);
	void setAttackDamage(int newAttackDamage);
	// Getters

	// Monitor Functions
	bool isDead() const;
	bool isOutOfEnergy() const;
	// Member Functions
	void attack(const std::string &target);
	void takeDamage(int amount);
	void beRepaired(int amount);
	void checkStatus();
};
