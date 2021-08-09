#include "Weapon.hpp"

Weapon::Weapon( const std::string& type ) : _type(type)
{
}

Weapon::~Weapon()
{
}

std::string	Weapon::getType( void ) const
{
	const std::string& typeREF = this->_type;

	return (typeREF);
}

void	Weapon::setType( const std::string& type )
{
	this->_type = type;
}
