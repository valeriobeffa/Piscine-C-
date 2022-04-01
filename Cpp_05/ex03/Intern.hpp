#ifndef INTERN_HPP
#define INTERN_HPP

#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern
{
    public:
        Intern();
        ~Intern();
        Form* makeForm(std::string formType, std::string target);
};

#endif