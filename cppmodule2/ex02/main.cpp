#include <iostream>
#include "Fixed.hpp"

int		main ( void )
{
	Fixed	a( 12.449f );
	Fixed	b( 13.221f );
	Fixed	c;

	c.setRawBits( 2 );
	std::cout << "c == " << c.getRawBits() <<  std::endl;
	
	return (0);
}
