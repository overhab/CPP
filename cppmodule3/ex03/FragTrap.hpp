#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
protected:
	static int	_hp;
	static int	_ep;
	static int	_ap;
public:
	FragTrap( void );
	FragTrap( const FragTrap& copy );
	FragTrap( const std::string& name );
	~FragTrap( );

	void		highFivesGuys(void) const;
	void		attack( std::string const & target );
	FragTrap&	operator=( const FragTrap& ref );
};

#endif
