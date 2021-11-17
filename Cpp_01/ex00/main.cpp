#include "Zombie.hpp"

int main()
{
    Zombie *zombie;

    zombie = newZombie("Gennarino");
    zombie->announce();
    randomChump("SuperPasqualone");
    delete (zombie);
    return (0);
}