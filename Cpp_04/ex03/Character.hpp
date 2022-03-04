#pragma once
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter
{
    protected:
        std::string name;
        AMateria*   materie[4];
    public:
        Character();
        Character(std::string const & name);
        ~Character();
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
        std::string const & getName() const;
        Character&     operator=(Character& uguale);
        Character(Character& copy);
};