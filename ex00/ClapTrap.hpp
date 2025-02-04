#ifndef FIXED_HPP
# define FIXED_HPP

# include <cctype>
# include <iomanip>
# include <ios>
# include <iostream>
# include <ostream>
# include <sstream>
# include <string>

class ClapTrap
{
  private:
	std::string name;
	int hitPoints = 10;
    int energyPoints = 10;
	int attackDamage = 0;

  public:
	// Constructor
    ClapTrap();
	ClapTrap(std::string &name);
    ClapTrap(const ClapTrap &copy);
    ClapTrap &operator=(const ClapTrap &copy); 
	~ClapTrap();
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

};

#endif