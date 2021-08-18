#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:

public:
	ScavTrap( void );
	ScavTrap( const ScavTrap& copy );
	ScavTrap( const std::string& name );
	~ScavTrap( );

	void		guardGate( void ) const;
	void		attack( std::string const & target );
	ScavTrap&	operator=( const ScavTrap& ref );
};

#endif
