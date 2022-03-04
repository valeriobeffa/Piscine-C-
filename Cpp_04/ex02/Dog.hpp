#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        std::string _name;
        Brain*      _brain;
    public:
        Dog();
        Dog(Dog& copy);
        Dog(std::string name);
        ~Dog();
        Dog&     operator=(Dog& uguale);
        void makeSound() const;
};