#include "main.hpp"

int		phonebook::id = 0;

void	phonebook::addContact( void )
{
	this->contact[phonebook::id].setContact( phonebook::id );
	phonebook::id++;
	if (phonebook::id > 7)
		phonebook::id = 0;
}

void	phonebook::displayContact( void ) const
{
	int		ind = 0;

	std::cout << std::setiosflags( std::ios::right );
	std::cout << std::setw(10) << "index" << "|" << std::setw(10) << "first name" << "|" << std::setw(10)
		<< "last name" << "|" << std::setw(10) << "nickname" << std::endl;
	while (ind < 8)
	{
		contact[ind].searchPrint();
		ind++;
	}
	std::cout << std::resetiosflags( std::ios::right );
}

void	phonebook::searchContact( void ) const
{
	std::string		input;
	int				index;

	this->displayContact();
	std::cout << "Enter contact index: ";
	std::getline(std::cin, input);
	if (std::cin.eof()) {
		return ;
	}
	if (!(input.find_first_not_of("0123456789") == std::string::npos) || input.length() > 1)
	{
		std::cout << "Error: wrong index format!" << std::endl;			
		return ;
	}
	std::stringstream(input) >> index;
	if (index >= 0 && index < 7)
		contact[index].printContact();
	else
		std::cout << "Wrong index" << std::endl;
	return ;
}
