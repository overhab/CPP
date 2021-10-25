#include "Fixed.hpp"
#include <climits>

int		main ( void )
{
	Fixed 			a;
	Fixed const 	b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;

	Fixed			fix1(25);
	Fixed			fix2(4);

	std::cout << fix1 / fix2 << std::endl;


	return (0);
}
