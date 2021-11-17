#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
    Zombie *heapzombie = new Zombie;

    heapzombie->setName(name);
    return (heapzombie);
}