#pragma once
#include <iostream>
#include <string>

class ClapTrap
{
    protected:
        std::string _name;
        unsigned int         _Hitpoint;
        unsigned int         _Energy_points;
        unsigned int         _Attack_damage;
    public:
        void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        unsigned int get_AD();
        std::string get_name();
        ClapTrap(std::string name);
        ClapTrap();
        ClapTrap(ClapTrap& copy);
        ClapTrap& operator=(ClapTrap& uguale);
        ~ClapTrap();
};