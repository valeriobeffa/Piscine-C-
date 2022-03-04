#pragma once
#include <string>
#include <iostream>

class Animal
{     
    protected:
        std::string type;
    public:
        Animal();
        Animal(Animal& copy);
        virtual ~Animal();

        Animal&     operator=(Animal& uguale);
        std::string getType() const;
        void        setType(std::string type_n);
        virtual void makeSound() const;
};