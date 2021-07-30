#include "main.hpp"

int		main( void )
{
	std::string input;
	phonebook	pb;

	(void)pb;
	while (1)
	{
		std::cout << "> ";
		std::getline(std::cin, input);
		//std::cout << "Your input is = " << input << '\t' << "Size = " << input.size() << std::endl;
		if (!input.compare("EXIT"))
			return (0);
		else if (!input.compare("ADD"))
			;//std::cout << "ADD\n";//contact.add();
		else if (!input.compare("SEARCH"))
			;//contact.search();
		//std::flush;
	}	
	return (0);	
}
