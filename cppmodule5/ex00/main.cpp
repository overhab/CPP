#include "Bureaucrat.hpp"
#include <sstream>

bool	setParams( std::string *name, int *grade )
{
	std::string	 input;

	std::cout << "Enter bureaucrat name: ";
	std::cin >> *name;
	std::cout << "Enter bureaucrat's grade: ";
	std::cin >> input;
	if (!(input.find_first_not_of("-0123456789") == std::string::npos))
		return false;
	std::stringstream(input) >> *grade;
	return true;
}

int		main ( void )
{
	std::string		name;
	int	grade;

	if (!setParams(&name, &grade)) 
	{
		std::cout << "Wrong input format!" << std::endl;
		return (-1);
	}
	try {
		Bureaucrat	bureau(name, grade);

		//bureau.deGrade();
		//bureau.incGrade();

		std::cout << bureau << std::endl;
	}
	catch (std::exception& err)
	{
		std::cout << err.what() << std::endl;
		return (-1);
	}

	return (0);
}
