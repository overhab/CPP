#include <iostream>
#include <cctype>

int	main(int ac, char **av)
{
	int i = 0, d = 0;

	if (ac > 1)
	{
		while (++i < ac)
		{
			d = 0;
			while (av[i][d])
			{
				std::cout << static_cast<char>(toupper(av[i][d]));
				d++;
			}
		}
	}	
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return (0);
}
