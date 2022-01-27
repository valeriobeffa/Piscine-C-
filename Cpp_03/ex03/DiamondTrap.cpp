#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ScavTrap(), FragTrap()
{   
    std::cout << "DT Default constructor called" << std::endl;
    this->_Energy_points = ScavTrap::_Energy_points;
    this->_name = "Ppunzo";
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
    std::cout << "DT Name constructor called" << std::endl;
    this->_Energy_points = ScavTrap::_Energy_points;
    this->_name = name;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DT destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap& copy)
{
    *this = copy;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap& uguale)
{
    this->_name = uguale._name;
    this->_Hitpoint = uguale._Hitpoint;
    this-> _Energy_points = uguale._Energy_points;
    this->_Attack_damage = uguale._Attack_damage;
    return (*this);
}

void DiamondTrap::attack(std::string const & target)
{
    this->_Energy_points--;
    std::cout << "DiamondTrap " << this->_name << " attack " << target << " causing " << this->_Attack_damage << " points of damage! " << _Energy_points << " Energy points remaining" << std::endl;
}

 void DiamondTrap::whoAmI()
 {
     std::cout << "My name is " << this->_name << " and my ClapTrap name is " << ClapTrap::_name + "_clap_name" << std::endl;
 }