#include "Cure.hpp"

Cure::Cure()
{
	std::cout << "Cure default constructor called" << std::endl;
	this->type = "cure";
}

Cure::~Cure()
{
    std::cout << "Cure destructor called" << std::endl;
}

Cure* Cure::clone() const
{
	Cure* a = new Cure(*this);
	return a;
}

Cure::Cure(const Cure& copy)
{
	*this = copy;
}

Cure& Cure::operator= (const Cure& cure)
{
	this->type = cure.type;
	return *this;

}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " + target.getName() + "'s wounds *" << std::endl;
}