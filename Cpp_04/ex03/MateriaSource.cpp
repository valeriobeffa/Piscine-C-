#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    std::cout << "MS default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		materie[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource& copy)
{
	std::cout << "MS copy constructor called" << std::endl;
    *this = copy;
}

MateriaSource::~MateriaSource()
{
	std::cout << "MS destructor called" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (materie[i])
        {
            delete materie[i];
            materie[i] = NULL;
        }
    }
}

MateriaSource& MateriaSource::operator= (MateriaSource& uguale)
{
	for (int i = 0; i < 4; i++) {
		if (materie[i])
		{
			delete materie[i];
			materie[i] = NULL;
		}
		materie[i] = uguale.materie[i]->clone();
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria* materia)
{
	for(int i = 0; i < 4; i++)
	{
		if(!materie[i])
		{
			materie[i] = materia->clone();
			std::cout << "Materia " + materia->getType() + " has been learned at index: " << i << std::endl;
			if (materia)
				delete materia;
			return;
		}
	}
	if (materia)
		delete materia;
	std::cout << "Full slots" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
	{
		if (materie[i] != NULL)
			if(materie[i]->getType() == type)
				return (materie[i]->clone());
	}
	return NULL;
}