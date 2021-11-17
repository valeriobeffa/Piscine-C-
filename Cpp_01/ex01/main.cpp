#include "Zombie.hpp"

int main()
{
    int number;
    Zombie *zombie;

    std::cout << "Choose the number of zombies: ";
    std::cin >> number;
    zombie = zombieHorde(number, "Clone_zombie");
    for (int i = 0; i < number; i++)
        zombie[i].announce();
    delete[] zombie;
}