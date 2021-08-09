#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie*	horde = new Zombie[N];

	for (int d = 0; d < N; d++)
	{
		horde[d].setName( name );
	}
	return (horde);
}
