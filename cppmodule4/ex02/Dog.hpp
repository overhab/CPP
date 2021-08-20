#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "Brain.hpp"

class Dog : public AAnimal
{
private:
	Brain*	_brain;
public:
	Dog( void );
	Dog( const Dog& copy );
	~Dog( );

	void	makeSound( void ) const;
	Dog& 	operator=( const Dog& ref );
	Brain*	myBrain( void ) const;
};

#endif
