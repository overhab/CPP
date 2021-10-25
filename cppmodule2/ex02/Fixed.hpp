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
	static const int 	_bits;
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

	Fixed&	operator=( const Fixed& fixed );

	Fixed	operator+( const Fixed& fixed ) const;
	Fixed	operator-( const Fixed& fixed ) const;
	Fixed	operator*( const Fixed& fixed ) const;
	Fixed	operator/( const Fixed& fixed ) const;

	bool	operator>( const Fixed& fixed ) const;
	bool	operator<( const Fixed& fixed ) const;
	bool	operator>=( const Fixed& fixed ) const;
	bool	operator<=( const Fixed& fixed ) const;
	bool	operator==( const Fixed& fixed ) const;
	bool	operator!=( const Fixed& fixed ) const;

	Fixed&	operator++( void );
	Fixed&	operator--( void );
	Fixed	operator++( int );
	Fixed	operator--( int );

	static			Fixed& min( Fixed& fixed1, Fixed& fixed2 );
	static			Fixed& max( Fixed& fixed1, Fixed& fixed2 );
	static const	Fixed& min( const Fixed& fixed1, const Fixed& fixed2 );
	static const	Fixed& max( const Fixed& fixed1, const Fixed& fixed2 );
};

std::ostream& operator<<( std::ostream & stream, const Fixed & ref);

#endif
