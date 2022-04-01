#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	Bureaucrat pasquale("Pasquale", 145);
	Bureaucrat paolo("Paolo", 40);
	Bureaucrat ppunzo("Ppunzo", 1);
	std::cout << pasquale << paolo << ppunzo;

	ShrubberyCreationForm a("alberi");
	RobotomyRequestForm b("Tiziano");
	
	Intern someRandomIntern;
	Form* ppf;
	ppf = someRandomIntern.makeForm("PresidentialPardon", "Bender");

	pasquale.signForm(a);
	std::cout << a;
	pasquale.executeForm(a);
	while (pasquale.getGrade() != a.getMinExe())
		pasquale.inc_grade();
	pasquale.executeForm(a);
	std::cout << b;
	paolo.signForm(b);
	paolo.executeForm(b);
	if (ppf)
	{
		ppunzo.executeForm(*ppf);
		std::cout << *ppf;
		ppunzo.signForm(*ppf);
		ppunzo.executeForm(*ppf);
		delete ppf;
	}
}