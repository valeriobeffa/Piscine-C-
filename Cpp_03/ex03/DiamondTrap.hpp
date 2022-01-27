#pragma once
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
    private:
    
    public:
        DiamondTrap();
        DiamondTrap(std::string name);
        DiamondTrap(DiamondTrap& copy);
        DiamondTrap& operator=(DiamondTrap& uguale);
        void attack(std::string const & target);
        ~DiamondTrap();
        void whoAmI();
};