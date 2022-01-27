#pragma once
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
    protected:
        unsigned int _Energy_points;

    public:
        void guardGate();
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(ScavTrap& copy);
        ScavTrap& operator=(ScavTrap& uguale);
        void attack(std::string const & target);
        ~ScavTrap();
};