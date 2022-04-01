#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
    private:
        std::string _target;

    public:
        RobotomyRequestForm(std::string target);
        ~RobotomyRequestForm();
        RobotomyRequestForm(const RobotomyRequestForm & copy);
        RobotomyRequestForm& operator=(RobotomyRequestForm const & uguale);
        void execute(Bureaucrat const & executor) const;
};

#endif