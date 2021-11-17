#include "Zombie.hpp"

void randomChump( std::string name )
{
    Zombie stackzombie;

    stackzombie.setName(name);
    stackzombie.announce();
}