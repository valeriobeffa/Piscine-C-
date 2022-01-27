#pragma once
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    private:

    public:
        void guardGate();
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(ScavTrap& copy);
        ScavTrap& operator=(ScavTrap& uguale);
        void attack(std::string const & target);
        ~ScavTrap();
};