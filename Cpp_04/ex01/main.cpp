#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const Animal* j = new Dog();
    Animal* i = new Cat();
    const Animal* zoo[10];
    for (int i = 0; i < 4; i++)
    {
        if (i % 2 == 0)
            zoo[i] = new Cat;
        else
            zoo[i] = new Dog;
    }
    for (int i = 0; i < 4; i++)
        delete zoo[i];
    delete j;//should not create a leak
    delete i;
}
