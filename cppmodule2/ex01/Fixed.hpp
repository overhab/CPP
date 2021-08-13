#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>
# include <sstream>
# include <iomanip>

class Fixed
{
private:
	int					_fixedPointValue;
	static const int	_bits;
public:
	Fixed();
	Fixed( const Fixed& copy );
	Fixed( const int num);
	Fixed( const float num);
	~Fixed();

	float	toFloat( void ) const;
	int		toInt( void ) const;
	int		getRawBits ( void ) const;
	void	setRawBits( int const raw );

	Fixed& operator=( const Fixed& fixed );
};

std::ostream& operator<<( std::ostream & stream, const Fixed & ref);

#endif