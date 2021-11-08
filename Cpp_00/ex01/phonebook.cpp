#include <iostream>
#include "rubric.hpp"

int main()
{
    std::string command;
    rubric  rubric;
    
    rubric.ft_init_num();
    std::cout << std::endl << "WELCOME!" << std::endl << std::endl;
     std::cout << std::endl << "Please choose a command:" << std::endl;
    std::cout << std::endl << "1. ADD: add a new contact in your phonebook" << std::endl;
    std::cout << "2. SEARCH: display your phonebook and search for a contact" << std::endl;
    std::cout << "3. EXIT: exit the phonebook" << std::endl << std::endl;
    std::getline(std::cin, command);
    while (command.compare("EXIT") != 0)
    {
        int i = rubric.ft_return_num();
        if ((command.compare("ADD")) == 0)
        {
            while (i >= 8)
                i -= 8;
            rubric.contact[i].ft_new_info();
            rubric.ft_add_num();
        }
        else if ((command.compare("SEARCH")) == 0)
        {
            rubric.ft_display_list();
            std::string index;
            std::getline(std::cin, index);
            int num = index[0] - 48;
            if (num <= i && num > 0 && num <= 8)
                rubric.contact[num - 1].ft_display_info();
            else
                std::cout << "Contact not existent" << std::endl;
            std::cout << std::endl;
        }
        else
            std::cout << "Please digit a valid comamnd" << std::endl;
        std::cout << std::endl << "Please choose a command:" << std::endl;
        std::cout << std::endl <<  "1. ADD: add a new contact in your phonebook" << std::endl;
        std::cout << "2. SEARCH: display your phonebook and search for a contact" << std::endl;
        std::cout << "3. EXIT: exit the phonebook" << std::endl << std::endl;
        std::getline(std::cin, command);
    }
    std::cout << "Please digit a valid command" << std::endl;
}