#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include <string>

class WrongCat : public WrongAnimal
{
protected:

public:
	WrongCat( void );
	WrongCat( const WrongCat& copy );
	~WrongCat( );

	void	makeSound( void ) const;
	WrongCat& operator=( const WrongCat& ref );
};

#endif
