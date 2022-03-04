#include "Ice.hpp"

Ice::Ice()
{
	std::cout << "Ice default constructor called" << std::endl;
	this->type = "ice";
}

Ice::~Ice()
{
    std::cout << "Ice destructor called" << std::endl;
}

Ice* Ice::clone() const
{
	Ice* a = new Ice(*this);
	return a;
}

Ice::Ice(const Ice& copy)
{
	*this = copy;
}

Ice& Ice::operator= (const Ice& Ice)
{
	this->type = Ice.type;
	return *this;

}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " + target.getName() + " *" << std::endl;
}