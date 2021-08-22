#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
protected:
	std::string		_type;
public:
	Animal( void );
	Animal( const Animal& copy );
	virtual ~Animal( );

	virtual void	makeSound( void ) const;
	std::string		getType( void ) const;
	Animal&			operator=( const Animal& ref );
};

#endif
