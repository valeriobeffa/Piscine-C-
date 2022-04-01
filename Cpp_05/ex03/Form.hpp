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
        Form(std::string name, int g_sign, int g_exe);
        virtual ~Form();
        Form& operator=(Form const & uguale);

        std::string         getName() const;
        bool               getSign() const; 
        int                getMinSign() const;
        int                getMinExe() const;

        void    beSigned(Bureaucrat& bur);
        
        class	GradeTooHighException : public std::exception
		{
				const char* what() const throw ();
		};

		class	GradeTooLowException : public std::exception
		{
				const char* what() const throw ();
		};

        class FormNotSignedException : public std::exception
        {
                virtual const char* what() const throw ();
        };

        virtual void execute(Bureaucrat const & executor) const = 0;
};

std::ostream& operator<<(std::ostream & os, Form & bur);

#endif