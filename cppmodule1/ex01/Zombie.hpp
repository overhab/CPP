#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
#include <string>

class Zombie
{
private:
	std::string _name;
public:
	void	setName( const std::string& name );
	void	announce( void ) const;
	Zombie(	void );
	~Zombie();
};

Zombie* zombieHorde( int N, std::string name );

#endif