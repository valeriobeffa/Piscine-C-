#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "Wa default constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Wa destructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator= (const WrongAnimal& copy)
{
	type = copy.type;
	return *this;
}

WrongAnimal::WrongAnimal(const WrongAnimal &wa)
{
	*this = wa;
}

std::string WrongAnimal::getType() const
{
	return this->type;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "* Wrong SIUUUUUUU *" << std::endl;
}
