#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
        std::string _name;
        Brain*      _brain;
    public:
        Cat();
        Cat(Cat& copy);
        Cat(std::string name);
        ~Cat();
        Cat&     operator=(Cat& uguale);
        void makeSound() const;
};