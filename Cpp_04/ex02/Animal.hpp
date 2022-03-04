#pragma once
#include <string>
#include <iostream>

class   Animal
{
    private:
        std::string _name; 
    protected:
        std::string type;
    public:
        Animal();
        Animal(Animal& copy);
        Animal(std::string name);
        virtual ~Animal();
        Animal&     operator=(Animal& uguale);
        std::string getType() const;
        void        setType(std::string type_n);
        virtual void makeSound() const = 0;
};