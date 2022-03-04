#include "AMateria.hpp"

AMateria::AMateria()
{
    std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type)
{
    std::cout << "AMateria type constructor called" << std::endl;
    this->type = type;
}

std::string const & AMateria::getType() const
{
	return type;
}

AMateria::~AMateria()
{
    std::cout << "AMateria destructor called" << std::endl;
}

AMateria& AMateria::operator=(AMateria& uguale)
{
    this->type = uguale.type;
    return (*this);
}

AMateria::AMateria(AMateria& copy)
{
    *this = copy;
}

void AMateria::use(ICharacter& target)
{
    (void)target;
}