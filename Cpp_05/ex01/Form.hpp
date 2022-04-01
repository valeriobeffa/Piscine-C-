#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{   
    private:

        const std::string   _name;
        bool                _signed;
        const int           _min_sign;
        const int           _min_exe;

    public:

        Form();
        Form(const Form& copy);
        Form(std::string name, int g_sign, int g_exe );
        ~Form();
        Form& operator=(Form const & uguale);

        std::string   getName();
        bool          getSign();
        int           getMinSign();
        int           getMinExe();

        void    beSigned(Bureaucrat& bur);
        
        class	GradeTooHighException : public std::exception
		{
				const char* what() const throw ();
		};

		class	GradeTooLowException : public std::exception
		{
				const char* what() const throw ();
		};
};

std::ostream& operator<<(std::ostream & os, Form & bur);

#endif