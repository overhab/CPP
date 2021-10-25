#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
class	AMateria;
class	ICharacter;

class Cure : public AMateria
{
private:
	
public:
	Cure( void );
	Cure( const Cure& copy );
	~Cure( );

	AMateria*	clone() const;
	void		use(ICharacter& target);
	Cure&		operator=( const Cure& ref );
};

#endif
