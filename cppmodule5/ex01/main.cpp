#include "Bureaucrat.hpp"
#include "Form.hpp"

int		main ( void )
{
/* 	try {
		Form	form1("first", 100, 100);
		std::cout << form1 << std::endl;

		Form	form2("second", 1, 151);
		std::cout << form2 << std::endl;
	}
	catch (Form::GradeTooHighException& err)
	{
		std::cout << err.what() << std::endl;
		return (-1);
	}
	catch (Form::GradeTooLowException& err)
	{
		std::cout << err.what() << std::endl;
		return (-1);
	} */

	Bureaucrat	bureau1("Max", 36);
	Bureaucrat	bureau2("Peter", 12);
	Bureaucrat	bureau3("John", 1);
	Form		form_1("form_1", 54, 24);
	Form		form_2("form_2", 15, 3);
	Form		form_3("form_3", 2, 1);

	try {
	//form_3.beSigned(bureau1);
	bureau1.signForm(form_3);
	std::cout << "-------------------------------" << std::endl;
	std::cout << form_1 << std::endl;
	form_1.beSigned(bureau1);
	std::cout << form_1 << std::endl;
	std::cout << "-------------------------------" << std::endl;
	std::cout << form_2 << std::endl;
	std::cout << form_3 << std::endl;
	bureau2.signForm(form_2);
	//bureau2.signForm(form_3);
	bureau3.signForm(form_3);
	std::cout << form_2 << std::endl;
	std::cout << form_3 << std::endl;
	bureau3.signForm(form_3);
	std::cout << "-------------------------------" << std::endl;
	}
	catch(Form::GradeTooLowException& err)
	{
		std::cout << "Cannot be signed. " << err.what() << std::endl;
		return (-1);
	}

	return (0);
}
