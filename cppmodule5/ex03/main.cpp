#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int		main ( void )
{
	Intern		intern;
	Bureaucrat	bureau("Stan", 21);
	Form*		rrf;

	try {
	std::cout << "-------------------------------" << std::endl;
	rrf = intern.makeForm("shrubbery creation", "Eric");
	bureau.signForm(*rrf);
	bureau.executeForm(*rrf);
	delete rrf;

	std::cout << "-------------------------------" << std::endl;
	rrf = intern.makeForm("presidental pardon", "Kyle");
	bureau.signForm(*rrf);
	bureau.executeForm(*rrf);
	delete rrf;

	std::cout << "-------------------------------" << std::endl;
	rrf = intern.makeForm("robotomy request", "Kenny");
	bureau.signForm(*rrf);
	bureau.executeForm(*rrf);
	delete rrf;

	std::cout << "-------------------------------" << std::endl;
	rrf = intern.makeForm("bla bla bla", "Vasya");
	bureau.signForm(*rrf);
	bureau.executeForm(*rrf);
	delete rrf;

	std::cout << "-------------------------------" << std::endl;
	}
	catch (std::exception & err)
	{
		std::cout << err.what() << std::endl;
		std::cout << "-------------------------------" << std::endl;
	}
	return (0);
}
