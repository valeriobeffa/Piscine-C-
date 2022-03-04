#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(Animal& copy)
{
    *this = copy; 
}

Animal& Animal::operator=(Animal& uguale)
{
    this->type = uguale.type;
    return (*this);
}

std::string Animal::getType() const
{
    return (this->type);
}

void Animal::setType(std::string type_n)
{
    this->type = type_n;
}

void Animal::makeSound() const
{
    std::cout << "* SIUUUUUUU *" << std::endl;
}