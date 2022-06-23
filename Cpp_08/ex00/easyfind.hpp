#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>
#include <vector>

template <typename T>
int easyfind(T container, int toFind)
{
    int i = 0;
    for (typename T::iterator iterator = container.begin(); iterator < container.end(); iterator++)
    {
        if (*iterator == toFind)
        {
            std::cout << toFind << " found at index ";
            return (i);
        }
        i++;
    }
    std::cout << "Error: no occurences found" << std::endl;
    return (-1);
}

#endif