#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:
	
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
