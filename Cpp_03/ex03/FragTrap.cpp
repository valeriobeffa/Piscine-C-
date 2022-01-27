#include "FragTrap.hpp"
#include <unistd.h>

FragTrap::FragTrap() : ClapTrap()
{
    _Hitpoint = 100;
    _Energy_points = 100;
    _Attack_damage = 30;
    _name = "Gino";
    std::cout << "FT Default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
    _Hitpoint = 100;
    _Energy_points = 100;
    _Attack_damage = 30;
    std::cout << "FT Name constructor called" << std::endl;
    this->_name = name;
}

FragTrap::FragTrap(FragTrap& copy)
{
    *this = copy;
}

FragTrap::~FragTrap()
{
    std::cout << "FT Destructor called" << std::endl;
}

FragTrap& FragTrap::operator=(FragTrap& uguale)
{
    this->_name = uguale._name;
    this->_Hitpoint = uguale._Hitpoint;
    this-> _Energy_points = uguale._Energy_points;
    this->_Attack_damage = uguale._Attack_damage;
    return (*this);
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "Give me five!" << std::endl;
}

void FragTrap::attack(std::string const & target)
{
    this->_Energy_points--;
    std::cout << "FragTrap " << this->_name << " attack " << target << " causing " << this->_Attack_damage << " points of damage! " << _Energy_points << " Energy points remaining" << std::endl;
}