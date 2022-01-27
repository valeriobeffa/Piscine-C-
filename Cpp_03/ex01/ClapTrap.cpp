#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _Hitpoint(10), _Energy_points(10), _Attack_damage(0)
{
    std::cout << "CT Default constructor called" << std::endl;
    this->_name = "Gino";
}

ClapTrap::ClapTrap(std::string name) : _Hitpoint(10), _Energy_points(10), _Attack_damage(0)
{
    std::cout << "CT Name constructor called" << std::endl;
    this->_name = name;
}

ClapTrap::ClapTrap(ClapTrap& copy)
{
    *this = copy;
}

ClapTrap::~ClapTrap()
{
    std::cout << "CT Destructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(ClapTrap& uguale)
{
    this->_name = uguale._name;
    this->_Hitpoint = uguale._Hitpoint;
    this-> _Energy_points = uguale._Energy_points;
    this->_Attack_damage = uguale._Attack_damage;
    return (*this);
}

std::string ClapTrap::get_name()
{
    return (this->_name);
}

unsigned int ClapTrap::get_AD()
{
    return (_Attack_damage);
}

void ClapTrap::attack(std::string const & target)
{
    if (_Energy_points == 1)
        _Energy_points = 0;
    else
        this->_Energy_points--;
    std::cout << "ClapTrap " << this->_name << " attack " << target << " causing " << this->_Attack_damage << " points of damage! " << _Energy_points << " Energy points remaining" << std::endl;
}

void ClapTrap::takeDamage(unsigned int damage)
{
    if (damage > _Hitpoint)
        this->_Hitpoint = 0;
    else
        this->_Hitpoint -= damage;
    std::cout << this->_name << " takes " << damage << " damage points! " << _Hitpoint << " HP remaining" << std::endl;
}

void ClapTrap::beRepaired(unsigned int hp_gained)
{
    this->_Hitpoint += hp_gained;
    std::cout << this->_name << " gained " << hp_gained << " HP points! " << _Hitpoint << " remaining " << std::endl;
}