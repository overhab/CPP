#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int		main ( void )
{
	Bureaucrat				bureau1("Max", 5);
	Bureaucrat				bureau2("Peter", 150);
	ShrubberyCreationForm	form_1("home");
	PresidentialPardonForm	form_2("John");
	RobotomyRequestForm		form_3("Daniel");

	std::cout << "-------------------------------" << std::endl;
	std::cout << form_1 << std::endl;
	std::cout << form_2 << std::endl;
	std::cout << form_3 << std::endl;
	std::cout << "-------------------------------" << std::endl;
	bureau1.signForm(form_1);
	bureau1.signForm(form_2);
	bureau2.signForm(form_3);
	bureau1.signForm(form_3);
	bureau1.signForm(form_2);
	bureau1.signForm(form_3);
	std::cout << "-------------------------------" << std::endl;
	std::cout << form_1 << std::endl;
	std::cout << form_2 << std::endl;
	std::cout << form_3 << std::endl;
	std::cout << "-------------------------------" << std::endl;
	bureau1.executeForm(form_1);
	bureau1.executeForm(form_2);
	bureau1.executeForm(form_3);
	bureau2.executeForm(form_3);
	std::cout << "-------------------------------" << std::endl;

	return (0);
}
