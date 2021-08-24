#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern( void )
{
	_funcPtr[0] = &Intern::_makeShrubberyCreationForm;
	_funcPtr[1] = &Intern::_makePresidentialPardonForm;
	_funcPtr[2] = &Intern::_makeRobotomyRequestForm;
	_formName[0] = "shrubbery creation";
	_formName[1] = "presidental pardon";
	_formName[2] = "robotomy request";
}

Intern::Intern( const Intern& copy )
{
	(void)copy;
}

Intern::~Intern( void )
{
}

Intern& 	Intern::operator=( const Intern& ref )
{
	(void)ref;
	return (*this);
}

Form*		Intern::makeForm( const std::string& name, const std::string& target )
{
	size_t i = 0, id = 0;

	while (i < SIZE && (id = this->_formName[i].find(name)))
		i++;
	if (id < SIZE && id != std::string::npos)
		return ((this->*_funcPtr[i])(target));
	throw (Intern::WrongFormNameException());
	return NULL;
}

Form*		Intern::_makeShrubberyCreationForm( const std::string& target )
{
	std::cout << "Intern creates \"Shrubbery creation form\"." << std::endl;
	return (new ShrubberyCreationForm(target));
}
Form*		Intern::_makePresidentialPardonForm( const std::string& target )
{
	std::cout << "Intern creates \"Presidential pardon form\"." << std::endl;
	return (new PresidentialPardonForm(target));
}
Form*		Intern::_makeRobotomyRequestForm( const std::string& target )
{
	std::cout << "Intern creates \"Robotomy request form\"." << std::endl;
	return (new RobotomyRequestForm(target));
}
