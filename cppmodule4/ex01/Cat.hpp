#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
# include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain*	_brain;
public:
	Cat( void );
	Cat( const Cat& copy );
	~Cat( );

	void	makeSound( void ) const;
	Cat& 	operator=( const Cat& ref );
	Brain*	myBrain( void ) const;
	void	setType( const std::string& type );
};

#endif
