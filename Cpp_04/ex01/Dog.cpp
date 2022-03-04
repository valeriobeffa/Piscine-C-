#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog default constructor called" << std::endl;
    this->type = "Dog";
    _brain = new Brain;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
    delete _brain;
}

Dog::Dog(std::string name)
{
    std::cout << "Dog name constructor called" << std::endl;
    this->_name = name;
}

Dog::Dog(Dog& copy)
{
    std::cout << "Dog copy constructor called" << std::endl;
    _brain = new Brain;
    *this = copy;
}

Dog& Dog::operator=(Dog& uguale)
{
    this->_name = uguale._name;
    this->type = uguale.type;
    *this->_brain = *uguale._brain;
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "Woof woof" << std::endl;
}