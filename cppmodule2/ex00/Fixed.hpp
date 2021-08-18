#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
private:
	int					_fixedPointValue;
	static const int	_bits;
public:
	Fixed();
	Fixed( const Fixed& copy );
	~Fixed();
	int		getRawBits ( void ) const;
	void	setRawBits( int const raw );

	Fixed& operator=( const Fixed& fixed );
};

#endif
