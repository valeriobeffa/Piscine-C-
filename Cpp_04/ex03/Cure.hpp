#pragma once
#include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		~Cure();
		Cure(const Cure& copy);
		Cure& operator=(const Cure& Uguale);
		Cure* clone() const;
		void use(ICharacter& target);
};