#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>

class Dog : public Animal
{
protected:

public:
	Dog( void );
	Dog( const Dog& copy );
	~Dog( );

	void	makeSound( void ) const;
	Dog& operator=( const Dog& ref );
};

#endif
