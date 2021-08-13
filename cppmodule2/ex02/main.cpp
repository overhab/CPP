#include <iostream>
#include "Fixed.hpp"

int		main ( void )
{
	Fixed	a( 12.449f );
	Fixed	b( 12.221f );


	std::cout << "MAX is " << Fixed::max( a, b ) <<  std::endl;
	
	return (0);
}
