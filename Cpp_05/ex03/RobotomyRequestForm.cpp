#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form ("RobotomyRequest", 72, 45)
{
    this->_target = target;
}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & copy)
{
    *this = copy;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const & uguale)
{
    this->_target = uguale._target;
    return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (!this->getSign())
        throw Form::FormNotSignedException();
    if (executor.getGrade() <= this-> getMinExe())
        std::cout << "* SKUUU SKRRRTTT *\n" << this->_target << " has been robotomized successfully 50% of the time" << std::endl;
    else
    {
        std::cout << "WARNING: robotomy failed because ";
        throw Bureaucrat::GradeTooLowException();
    }
}