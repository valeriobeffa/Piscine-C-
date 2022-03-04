#pragma once 
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria* materie[4];
	public:
		MateriaSource();
		MateriaSource(MateriaSource& copy);
		MateriaSource& operator= (MateriaSource& uguale);
		~MateriaSource();
		void learnMateria(AMateria* materia);
		AMateria* createMateria(std::string const & type);
};