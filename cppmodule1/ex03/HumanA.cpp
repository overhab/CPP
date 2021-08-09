#include "HumanA.hpp"

HumanA::HumanA( const std::string& name, Weapon& weapon ) : _name(name), weaponA(weapon)
{
}

HumanA::~HumanA()
{
}

void	HumanA::attack( void )
{
	std::cout << this->_name << " attacks with his " << this->weaponA.getType() << std::endl;
}
