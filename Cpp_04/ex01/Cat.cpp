#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat default constructor called" << std::endl;
    this->type = "Cat";
    _brain = new Brain;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
    delete _brain;
}

Cat::Cat(std::string name)
{
    std::cout << "Cat name constructor called" << std::endl;
    this->_name = name;
}

Cat::Cat(Cat& copy)
{
    *this = copy; 
}

Cat& Cat::operator=(Cat& uguale)
{
    this->_name = uguale._name;
    this->type = uguale.type;
    *this->_brain = *uguale._brain;
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "Meowwwww" << std::endl;
}