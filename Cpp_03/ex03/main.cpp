#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap Pippo;
    DiamondTrap Pluto("Pluto");

    Pippo.attack(Pluto.get_name());
    Pluto.takeDamage(Pluto.get_AD());

    Pippo.beRepaired(2);
    Pluto.beRepaired(2);

    Pluto.guardGate();
    Pluto.highFivesGuys();
    Pluto.whoAmI();


    return (0);
}