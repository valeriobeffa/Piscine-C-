#include "Character.hpp"

Character::Character()
{
	std::cout << "Character default constructor called" << std::endl;
	for(int i = 0; i < 4; i++)
		materie[i] = NULL;
}

Character::Character(std::string const & name)
{
	std::cout << "Character name constructor called" << std::endl;
    this->name = name;
	for(int i = 0; i < 4; i++)
		materie[i] = NULL;
}

Character::~Character()
{
	std::cout << "Character destructor called" <<std::endl;
	for(int i = 0; i < 4; i++)
	{
		if (materie[i])
			delete materie[i];
	}
}

Character::Character(Character& copy)
{
	std::cout << "Character copy constructor called" << std::endl;
    *this = copy;
    this->name = copy.getName();
}

Character& Character::operator=(Character& uguale)
{
    for (int i = 0; i < 4; i++)
	{
		if (this->materie[i])
		{
			delete this->materie[i];
			this->materie[i] = NULL;
		}
		if (uguale.materie[i])
			this->materie[i] = uguale.materie[i]->clone();
	}
	name.assign(uguale.getName());
	return *this;
}

std::string const & Character::getName() const
{
	return(name);
}

void Character::use(int i, ICharacter& target)
{
	if (materie[i])
	{
		materie[i]->use(target);
	}
	else
		std::cout << "Materia not existent" << std::endl;
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (materie[i] == NULL)
		{
			std::cout << m->getType() << " equipped at index " << i << std::endl;
			materie[i] = m->clone();
			return ;
		}
	}	
}

void Character::unequip(int i)
{
	std::cout << materie[i]->getType() << " unequipped at index " << i << std::endl;
	materie[i] = NULL;
}