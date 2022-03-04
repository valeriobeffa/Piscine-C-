#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat default constructor called" << std::endl;
    this->type = "Cat";
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(Cat& copy)
{
    *this = copy; 
}

Cat& Cat::operator=(Cat& uguale)
{
    this->type = uguale.type;
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "* Meowwwww *" << std::endl;
}