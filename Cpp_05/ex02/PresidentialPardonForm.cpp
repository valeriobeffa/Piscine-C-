#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form ("PresidentialPardon", 25, 5)
{
    this->_target = target;
}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & copy)
{
    *this = copy;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const & uguale)
{
    this->_target = uguale._target;
    return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (!this->getSign())
        throw Form::FormNotSignedException();
    if (executor.getGrade() <= this-> getMinExe())
        std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
    else
        throw Bureaucrat::GradeTooLowException();
}