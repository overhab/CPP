#include "main.hpp"

int		main(int ac, char **av)
{
	if (ac == 2)
	{
		std::string input = av[1];
		Convert		conv(input);
		
		conv.convert();
/* 		std::cout << "----------------------------------" << std::endl;
		int i = static_cast<int>(conv);
		std::cout << i << std::endl;
		std::cout << "----------------------------------" << std::endl; */
		return (0);
	}
	std::cout << "Expected one argument..." << std::endl;
	return (0);
}
