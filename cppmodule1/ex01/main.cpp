#include "Zombie.hpp"

#define NUM 25

int		main( void )
{
	Zombie*	horde = zombieHorde(NUM, "ZOMBIE");

	for (int d = 0; d < NUM; d++)
		horde[d].announce();
	delete [] horde;
	return (0);
}
