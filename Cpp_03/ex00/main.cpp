#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("Pippo");
    ClapTrap b("Pluto");
    ClapTrap c("Paperino");

    a.attack(b.get_name());
    b.takeDamage(a.get_AD());

    b.attack(c.get_name());
    c.takeDamage(b.get_AD());

    c.attack(a.get_name());
    a.takeDamage(c.get_AD());

    a.beRepaired(2);
    b.beRepaired(3);
    c.beRepaired(4);
}