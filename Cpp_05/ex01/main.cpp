#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat ppunzo("Ppunzo", 150);
	Bureaucrat paoletto("Paoletto", 50);
	Bureaucrat tiziano("Tiziano", 76);
	std::cout << ppunzo << paoletto << tiziano << std::endl;

	try
	{
		Bureaucrat trevi("Trevi", 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what();
	}

	Form a("Sciabolata", 75, 60);

	try
	{
		ppunzo.signForm(a);
	}
	catch(std::exception &e)
	{
		std::cerr << e.what();
	}

	try
	{
		Form notgood("TopSecret", 200, 200);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		std::cout << a;
		paoletto.signForm(a);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what();
	}

	std::cout << a;
	tiziano.inc_grade();
	
	try
	{
		tiziano.signForm(a);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what();
	}
}