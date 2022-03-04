#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    //Animal j;
    //std::cout << j.getType() << std::endl;
    Animal* i = new Dog();
    std::cout << i->getType() << std::endl;
    delete i;
}
