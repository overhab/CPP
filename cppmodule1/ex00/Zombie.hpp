#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
#include <string>

class Zombie
{
private:
	std::string _name;
public:
	void	announce( void ) const;
	Zombie(	std::string name );
	~Zombie();
};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif