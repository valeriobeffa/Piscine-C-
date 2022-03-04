#pragma once
#include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog();
        Dog(Dog& copy);
        ~Dog();

        Dog&     operator=(Dog& uguale);
        void makeSound() const;
};