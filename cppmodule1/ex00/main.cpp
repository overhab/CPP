#include "Zombie.hpp"

int		main( void )
{
	Zombie *newZomb = newZombie("newZombie");
	randomChump("Chump");

	delete newZomb;
	return (0);
}
