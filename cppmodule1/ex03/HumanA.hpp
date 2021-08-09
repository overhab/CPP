#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanA
{
private:
	std::string	_name;
public:
	Weapon&	weaponA;

	void	attack( void );
	HumanA( const std::string& name, Weapon& weapon );
	~HumanA();
};

#endif