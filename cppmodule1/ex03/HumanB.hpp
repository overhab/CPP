#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanB
{
private:
	std::string	_name;
public:
	Weapon	*weaponB;

	HumanB( const std::string& name );
	~HumanB();
	void	attack( void );
	void	setWeapon( Weapon& weapon );
};

#endif