#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>
# include <string>

class AAnimal
{
protected:
	std::string		_type;
public:
	AAnimal( void );
	AAnimal( const AAnimal& copy );
	virtual ~AAnimal( );

	virtual void	makeSound( void ) const = 0;
	std::string		getType( void ) const;
	AAnimal& operator=( const AAnimal& ref );
};

#endif
