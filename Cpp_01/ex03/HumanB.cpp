#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    setname(name);
}

HumanB::~HumanB()
{

}

void    HumanB::setname(std::string str)
{
    this->name = str;
}

std::string		HumanB::getname()
{
    return (this->name);
}

void 			HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}

void HumanB::attack()
{
    std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
}