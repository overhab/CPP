#include "HumanB.hpp"

HumanB::HumanB( const std::string& name ) : _name(name)
{
	weaponB = NULL;
}

HumanB::~HumanB()
{
}

void	HumanB::attack( void )
{
	std::cout << this->_name << " attacks with his " << this->weaponB->getType() << std::endl;
}

void	HumanB::setWeapon( Weapon& weapon )
{
	this->weaponB = &weapon;
}
