#include "Karen.hpp"

Karen::Karen()
{
    this->karenSays[0] = &Karen::debug;
    this->karenSays[1] = &Karen::info;
    this->karenSays[2] = &Karen::warning;
    this->karenSays[3] = &Karen::error;
    this->level[0] = "DEBUG";
    this->level[1] = "INFO";
    this->level[2] = "WARNING";
    this->level[3] = "ERROR";
}

Karen::~Karen()
{

}

void Karen::debug(void)
{
    std::cout << "[ DEBUG ]" << std::endl << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl << std::endl;
    info();
}

void Karen::info(void)
{
    std::cout << "[ INFO ]" << std::endl << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl << std::endl;
    warning();
}

void Karen::warning(void)
{
    std::cout << "[ WARNING ]" << std::endl << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl << std::endl;
    error();
}

void Karen::error(void)
{
    std::cout << "[ ERROR ]" << std::endl << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void Karen::complain(std::string level)
{
    int i = 0;
    for (i = 0; i < 4; i++)
        if (!level.compare(this->level[i]))
            break;
    switch (i)
    {
        case 0: (this->*karenSays[i])();
            break;
        case 1: (this->*karenSays[i])();
            break;
        case 2: (this->*karenSays[i])();
            break;
        case 3: (this->*karenSays[i])();
            break;
        default:
            std::cout << "Error" << std::endl;
    }
}