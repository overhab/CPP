#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>

class Cat : public Animal
{
protected:

public:
	Cat( void );
	Cat( const Cat& copy );
	virtual ~Cat( );

	void	makeSound( void ) const;
	Cat& operator=( const Cat& ref );
};

#endif
