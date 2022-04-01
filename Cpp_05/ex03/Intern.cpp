#include "Intern.hpp"

Intern::Intern()
{

}

Intern::~Intern()
{

}

Form* Intern::makeForm(std::string formType, std::string target)
{
    int i = 0;
    Form* f = NULL;
    std::string form[3];
    form[0] = "RobotomyRequest";
    form[1] = "ShrubberyCreation";
    form[2] = "PresidentialPardon";

    for (i = 0; i < 3; i++)
    {
        if (formType == form[i])
            break;
    }
    switch (i)
    {
        case 0:
            f = new RobotomyRequestForm(target);
            break;
        case 1:
            f = new ShrubberyCreationForm(target);
            break;
        case 2:
            f = new PresidentialPardonForm(target);
            break;
        default:
            std::cout << "Error: wrong format" << std::endl;
            return NULL;
            break;
    }
    std::cout << "Intern creates " << f->getName() << std::endl;
    return f;
}