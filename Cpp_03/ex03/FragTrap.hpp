#pragma once
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
    private:

    public:
        void  highFivesGuys(void);
        FragTrap();
        FragTrap(std::string name);
        FragTrap(FragTrap& copy);
        FragTrap& operator=(FragTrap& uguale);
        void attack(std::string const & target);
        ~FragTrap();
};