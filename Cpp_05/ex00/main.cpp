#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat ppunzo("ppunzo", 151);
		std::cout << ppunzo;
	}
	catch( std::exception& e)
	{
		std::cerr << e.what();
	}
	try
	{
		Bureaucrat ppunzo1("ppunzo1", 150);
		std::cout << ppunzo1;
		Bureaucrat ppunzo2("ppunzo2", 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what();
	}
	Bureaucrat ok("ok", 150);
	std::cout << ok;
	try
	{
		std::cout << "Decrementing ok\n";
		ok.dec_grade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what();
	}
	Bureaucrat a("Ugo", 1);
	std::cout << a;
	try
	{
		std::cout << "Incrementing Ugo\n";
		a.inc_grade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what();
	}
	Bureaucrat pippunzo("Pippunzo", 75);
	std::cout << pippunzo;
	try
	{
		std::cout << "Incrementing Pippunzo\n";
		pippunzo.inc_grade();
		std::cout << pippunzo;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what();
	}

}