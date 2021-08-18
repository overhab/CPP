#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
private:
	std::string _name;
	int			_hitPoints;
	int			_energyPoings;
	int			_attackDamage;
public:
	ClapTrap( void );
	ClapTrap( const std::string& name );
	ClapTrap( const ClapTrap& copy );
	~ClapTrap( );

	void		attack( std::string const & target );
	void 		takeDamage( unsigned int amount );
	void 		beRepaired( unsigned int amount );

	ClapTrap& operator=( const ClapTrap& ref );
};

#endif
