#include "main.hpp"

int		main( void )
{
	std::string input;
	phonebook	pb;

	std::cout << "Enter command: (ADD, SEARCH or EXIT) " << std::endl;
	while (1)
	{
		std::getline(std::cin, input);
		if (!input.compare("EXIT"))
			return (0);
		else if (!input.compare("ADD"))
			pb.addContact();
		else if (!input.compare("SEARCH"))
			pb.searchContact();
	}
	return (0);	
}
