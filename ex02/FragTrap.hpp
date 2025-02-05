#pragma once
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    private:
    public:
    	// Constructors
        FragTrap(void);
        FragTrap(std::string &name);
        FragTrap(const FragTrap &copy);
	    FragTrap &operator=(const FragTrap &copy);
        ~FragTrap();
        // Member Functions
        void highFivesGuys(void);

};
