#include "main.hpp"

int		phonebook::id = 0;

void	phonebook::addContact( void )
{
	std::cout << "Enter first name: ";
	std::getline(std::cin, this->firstName);
	std::cout << "Enter last name: ";
	std::getline(std::cin, this->lastName);
	std::cout << "Enter nickname: ";
	std::getline(std::cin, this->nickname);
	std::cout << "Enter phone number: ";
	std::getline(std::cin, this->phoneNumber);
	std::cout << "Enter darkest secret: ";
	std::getline(std::cin, this->secret);
	this->contact[phonebook::id].setContact( this );
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
	std::cin >> input;
	for (size_t d = 0; d < input.size(); d++)
		if (!isdigit(input[d]))
		{
			std::cout << "Error: wrong index format!" << std::endl;
			return ;
		}
	std::stringstream(input) >> index;
	if (index >= 0 && index < 7)
		contact[index].printContact();
}
