#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "Form.hpp"
# include <string>

# define SIZE 3

class Intern
{
public:
	class WrongFormNameException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Wrogn form name!");
			}
	};
private:
	Form* 		(Intern::*_funcPtr[SIZE])(const std::string&);
	std::string _formName[SIZE];

	Form*		_makeShrubberyCreationForm( const std::string& target );
	Form*		_makePresidentialPardonForm( const std::string& target );
	Form*		_makeRobotomyRequestForm( const std::string& target );
public:
	Intern( void );
	Intern( const Intern& copy );
	~Intern( );

	Form*		makeForm( const std::string& name, const std::string& target );
	Intern& 	operator=( const Intern& ref );
};

#endif
