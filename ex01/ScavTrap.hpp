#pragma once
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    private:
        bool guardingGate = false;
    public:
    	// Constructors
        ScavTrap(void);
        ScavTrap(std::string &name);
        ScavTrap(const ScavTrap &copy);
	    ScavTrap &operator=(const ScavTrap &copy);
        ~ScavTrap();
        // Member Functions
        void attack(const std::string &target);
        void guardGate();
};
