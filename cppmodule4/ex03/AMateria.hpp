#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
class	ICharacter;

class AMateria
{
protected:
	std::string 	_type;
public:
	AMateria( void );
	AMateria( const AMateria& copy );
	AMateria( std::string const & type );
	virtual ~AMateria( );

	std::string const & getType() const; //Returns the materia type

	virtual			AMateria* clone() const = 0;

	virtual void	use(ICharacter& target);
	AMateria&		operator=( const AMateria& ref );
};

#endif
	