#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ScavTrap ppunzo;
    FragTrap ppunzios;

    ppunzo.attack(ppunzios.get_name());
    ppunzios.takeDamage(ppunzo.get_AD());

    ppunzo.beRepaired(2);
    ppunzios.beRepaired(3);

    ppunzo.guardGate();
    ppunzios.highFivesGuys();

    return (0);
}