#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}


Brain::Brain(Brain& copy)
{
    *this = copy; 
}

Brain& Brain::operator=(Brain& uguale)
{
    for (int i = 0; i < 100; i++)
        this->_ideas[i] = uguale._ideas[i];
    return (*this);
}