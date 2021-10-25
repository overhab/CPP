#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
class	AMateria;
class	ICharacter;

class Ice : public AMateria
{
private:
	
public:
	Ice( void );
	Ice( const Ice& copy );
	~Ice( );

	AMateria*	clone() const;
	void		use(ICharacter& target);
	Ice&		operator=( const Ice& ref );
};

#endif
