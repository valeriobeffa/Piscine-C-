#pragma once
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
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