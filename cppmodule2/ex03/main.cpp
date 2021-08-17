#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

int		main ( void )
{
	Point	a( 0, 10 );
	Point	b;
	Point	c( 10, 0 );
	Point	p( 0.01f, 0.01f );

	if (bsp(a, b, c, p))
		std::cout << "inside" << std::endl;
	else
		std::cout << "not inside" << std::endl;
	return (0);
}
