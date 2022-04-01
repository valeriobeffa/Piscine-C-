#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	Bureaucrat pasquale("Pasquale", 145);
	Bureaucrat paolo("Paolo", 40);
	Bureaucrat ppunzo("Ppunzo", 1);
	std::cout << pasquale << paolo << ppunzo;

	ShrubberyCreationForm a("Alberi");
	RobotomyRequestForm b("CK");
	PresidentialPardonForm c("Gfulvi");
	
	pasquale.signForm(a);
	std::cout << a;
	pasquale.executeForm(a);
	while (pasquale.getGrade() != a.getMinExe())
		pasquale.inc_grade();
	pasquale.executeForm(a);
	std::cout << b;
	paolo.signForm(b);
	paolo.executeForm(b);
	ppunzo.executeForm(c);
	std::cout << c;
	ppunzo.signForm(c);
	ppunzo.executeForm(c);
}
	