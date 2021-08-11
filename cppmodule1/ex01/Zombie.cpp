#include "Zombie.hpp"

Zombie::Zombie( void )
{
}

Zombie::~Zombie()
{
	std::cout << _name << " died" << std::endl;
}

void	Zombie::announce( void ) const
{
	std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName( const std::string& name )
{
	this->_name = name;
}
