#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(std::string name)
{
    std::cout << "Animal name constructor called" << std::endl;
    this->_name = name;
}

Animal::Animal(Animal& copy)
{
    *this = copy;
}

Animal& Animal::operator=(Animal& uguale)
{
    this->_name = uguale._name;
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
    std::cout << "OOoOoOOOoOoooo" << std::endl;
}