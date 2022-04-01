#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{

}

Bureaucrat::Bureaucrat(std::string _name, int _grade) : _name(_name)
{
    if (_grade > 150)
        throw (GradeTooLowException());
    if (_grade < 1)
        throw (GradeTooHighException());
    this->_grade = _grade;
}

Bureaucrat::~Bureaucrat()
{
   
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy)
{
    *this = copy;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const & uguale)
{
    this->_grade = uguale._grade;
    return (*this);
}

std::string Bureaucrat::getName()
{
    return (this->_name);
}

int Bureaucrat::getGrade()
{
    return (this->_grade);
}

const char * Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Bureaucrat grade is too high!\n");
}

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Bureaucrat grade is too low!\n");
}

void Bureaucrat::dec_grade()
{
	if (this->_grade + 1 == 151)
	{
		std::cout << "You reached the lowest grade: ";
		throw (GradeTooLowException());
	}
	this->_grade++;
	std::cout << "New grade of bureaucrat " << getName() << " is " << getGrade() << std::endl;
}

void Bureaucrat::inc_grade()
{
	if (this->_grade - 1 == 0)
	{
		std::cout << "You reached the highest grade: ";
		throw (GradeTooHighException());
	}
	this->_grade--;
	std::cout << "New grade of bureaucrat " << getName() << " is " << getGrade() << std::endl;
}

std::ostream& operator<<(std::ostream& out, Bureaucrat& bur)
{
	return out << bur.getName() << " bureaucrat grade " << bur.getGrade() << std::endl;
}

void Bureaucrat::signForm(Form& form)
{
	form.beSigned(*this);
}