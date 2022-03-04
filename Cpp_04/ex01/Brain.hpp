#pragma once
#include <string>
#include <iostream>

class Brain
{
    private:
        std::string _ideas[100];

    public:
        Brain();
        Brain(Brain& copy);
        ~Brain();
        Brain&     operator=(Brain& uguale);
};