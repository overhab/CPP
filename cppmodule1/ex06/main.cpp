#include "Karen.hpp"

int		main ( int ac, char **av )
{
	Karen	karen;

	if (ac == 2)
	{
		karen.complain(av[1]);
	}
	else
		std::cout << "Wrong arguments" << std::endl;
	return (0);
}
