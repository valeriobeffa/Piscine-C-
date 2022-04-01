#include "Form.hpp"

Form::Form(std::string _name, int g_sign, int g_exe) : _name(_name), _min_sign(g_sign), _min_exe(g_exe)
{
    if (g_sign > 150 || g_exe > 150)
        throw (GradeTooLowException());
    if (g_sign < 1 || g_exe < 1)
        throw (GradeTooHighException());
}

Form::~Form()
{

}

std::string Form::getName()
{
	return this->_name;
}

bool Form::getSign()
{
	return this->_signed;
}

int Form::getMinSign()
{
	return this->_min_sign;
}

int Form::getMinExe()
{
	return this->_min_exe;
}

Form::Form(const Form& copy) : _name(copy._name), _min_sign(copy._min_sign), _min_exe(copy._min_exe)
{
    *this = copy;
}

Form& Form::operator=(Form const & uguale)
{
    this->_signed = uguale._signed;
    return (*this);
}

const char * Form::GradeTooHighException::what() const throw()
{
    return ("Form grade is too high!\n");
}

const char * Form::GradeTooLowException::what() const throw()
{
    return ("Form grade is too low!\n");
}

std::ostream& operator<<(std::ostream& out, Form& form)
{
	out << "Name: " << form.getName() << "\nGrade to sign: " << form.getMinSign() << "\nGrade to execute: " << form.getMinExe();
	if (form.getSign())
		out << "\nSigned\n\n";
	else
		out << "\nNot signed\n\n";
	return out;
}

void	Form::beSigned(Bureaucrat& bur)
{
	if (this->_min_sign < bur.getGrade())
	{
		std::cout << bur.getName() << " couldn't sign " << this->getName() << " because ";
		throw (Bureaucrat::GradeTooLowException());
	}
	this->_signed = 1;
	std::cout << bur.getName() << " signed " << this->getName() << std::endl;
}