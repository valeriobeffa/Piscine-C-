#include "Weapon.hpp"

Weapon::Weapon(std::string str)
{
    setType(str);
}

Weapon::~Weapon()
{

}

void    Weapon::setType(std::string str)
{
    this->type = str;
}

std::string		Weapon::getType()
{
    return (this->type);
}