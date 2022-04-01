#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form ("ShrubberyCreation", 145, 137)
{
    this->_target = target;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & copy)
{
    *this = copy;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const & uguale)
{
    this->_target = uguale._target;
    return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (!this->getSign())
        throw Form::FormNotSignedException();
    if (executor.getGrade() <= this-> getMinExe())
    {
        std::ofstream myfile(_target + "_shrubbery");
		myfile <<
        "                ,@@@@@@@,\n"
        "        ,,,.   ,@@@@@@/@@,  .oo8888o.\n"
        "        ,&%%&%&&%,@@@@@/@@@@@@,8888/88/8o\n"
        "    ,%&/%&&%&&%,@@@/@@@/@@@88/88888/88'\n"
        "    %&&%&%&/%&&%@@/@@/ /@@@88888/88888'\n"
        "    %&&%/ %&%%&&@@/ V /@@' `88/8 `/88'\n"
        "    `&%/ ` /%&'    |.|        / '|8'\n"
        "        |o|        | |         | |\n"
        "        |.|        | |         | |\n"
        "     ___\\/ ._///_/__/  ,/_//__\\/.  /_//__/_\n";
        }
        else
            throw Bureaucrat::GradeTooLowException(); 
}