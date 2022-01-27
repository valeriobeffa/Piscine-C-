#include "ScavTrap.hpp"

int main()
{
    ClapTrap a("Pippo");
    ClapTrap b("Pluto");
    ScavTrap c("Paperino");
    ScavTrap ppunzo("ppunzo");

    a.attack(b.get_name());
    b.takeDamage(a.get_AD());

    b.attack(c.get_name());
    c.takeDamage(b.get_AD());

    ppunzo.attack(a.get_name());
    a.takeDamage(ppunzo.get_AD());

    a.beRepaired(2);
    b.beRepaired(3);
    c.beRepaired(4);

    ppunzo.guardGate();

    return (0);
}