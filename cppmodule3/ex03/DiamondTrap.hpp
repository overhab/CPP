#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include "ClapTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
	std::string		_name;
public:
	DiamondTrap( void );
	DiamondTrap( const DiamondTrap& copy );
	DiamondTrap( const std::string& name );
	~DiamondTrap( );

	void			attack( std::string const & target );
	void 			whoAmI() const;
	DiamondTrap&	operator=( const DiamondTrap& ref );
};

#endif
