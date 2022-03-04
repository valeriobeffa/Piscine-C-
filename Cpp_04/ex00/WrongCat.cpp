#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "Wc default constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "Wc destructor called" << std::endl;
}

WrongCat& WrongCat::operator= (const WrongCat& copy)
{
	type = copy.type;
	return *this;
}

WrongCat::WrongCat(const WrongCat &wc)
{
	*this = wc;
}

void	WrongCat::makeSound() const
{
	std::cout << "* Wrong meowwwww *" << std::endl;
}
