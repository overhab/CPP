#include "Zombie.hpp"

int		main( int ac, char **av )
{
	int N;

	if (ac == 2)
	{
		N = atoi(av[1]);
		if (N <= 0)
		{
			std::cout << "Wrong number of zombies" << std::endl;
			return (0);
		}
		Zombie*	horde = zombieHorde(N, "ZOMBIE");
		for (int d = 0; d < N; d++)
			horde[d].announce();
		delete [] horde;
	}
	return (0);
}
