#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    _Hitpoint = 100;
    _Energy_points = 50;
    _Attack_damage = 20;
    _name = "Gino";
    std::cout << "ST Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
    std::cout << "ST Name constructor called" << std::endl;
    _Hitpoint = 100;
    _Energy_points = 50;
    _Attack_damage = 20;
    this->_name = name;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ST Destructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap& copy)
{
    *this = copy;
}

void    ScavTrap::guardGate()
{
     std::cout << "ScavTrap " << this->_name << " have enterred in Gate keeper mode." << std::endl;
}

ScavTrap& ScavTrap::operator=(ScavTrap& uguale)
{
    this->_name = uguale._name;
    this->_Hitpoint = uguale._Hitpoint;
    this-> _Energy_points = uguale._Energy_points;
    this->_Attack_damage = uguale._Attack_damage;
    return (*this);
}

void ScavTrap::attack(std::string const & target)
{
    this->_Energy_points--;
    std::cout << "ScavTrap " << this->_name << " attack " << target << " causing " << this->_Attack_damage << " points of damage! " << _Energy_points << " Energy points remaining" << std::endl;
}