#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog default constructor called" << std::endl;
    this->type = "Dog";
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(Dog& copy)
{
    *this = copy; 
}

Dog& Dog::operator=(Dog& uguale)
{
    this->type = uguale.type;
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "* Woof woof *" << std::endl;
}