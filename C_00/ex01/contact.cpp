#include "contact.hpp"

std::string contact::ft_get_first_name()
{
    return (this->first_name);
}

std::string contact::ft_get_last_name()
{
    return (this->last_name);
}

std::string contact::ft_get_nickname()
{
    return (this->nickname);
}

std::string contact::ft_get_number()
{
    return (this->number);
}

std::string contact::ft_get_secret()
{
    return (this->secret);
}

void contact::ft_new_info()
{
    std::cout << std::endl << "Please compile the following fields" << std::endl;
    std::cout << "First name: ";
    std::getline(std::cin, this->first_name);
    std::cout << "Last name: ";
    std::getline(std::cin, this->last_name);
    std::cout << "Nickname: ";
    std::getline(std::cin, this->nickname);
    std::cout << "Phone number: ";
    std::getline(std::cin, this->number);
    std::cout << "Darkest secret: ";
    std::getline(std::cin, this->secret);
    std::cout << std::endl << "Contact succesfully created!" << std::endl;
}

void contact::ft_display_info()
{
    std::cout << "First name :" << this->first_name << std::endl;
    std::cout << "Last name :" << this->last_name << std::endl;
    std::cout << "Nickname :" << this->nickname << std::endl;
    std::cout << "Phone number :" << this->number << std::endl;
    std::cout << "Darkest secret :" << this->secret << std::endl;
}