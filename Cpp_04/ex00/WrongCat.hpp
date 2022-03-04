#pragma once
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
        ~WrongCat();
		WrongCat(const WrongCat &wc);
		WrongCat& operator= (const WrongCat& assign);
		void makeSound() const ;
};