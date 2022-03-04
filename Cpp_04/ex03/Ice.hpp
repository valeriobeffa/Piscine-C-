#pragma once
#include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		~Ice();
		Ice(const Ice& copy);
		Ice& operator=(const Ice& Uguale);
		Ice* clone() const;
		void use(ICharacter& target);
};