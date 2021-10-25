#include "Zombie.hpp"

int		main( void )
{
	Zombie *newZomb = newZombie("newZombie");

	newZomb->announce();

	
	randomChump("Chump");

	delete newZomb;
	return (0);
}
