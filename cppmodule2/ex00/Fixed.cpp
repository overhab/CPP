#include "Fixed.hpp"

int	bits = 8;

Fixed::Fixed() : _fixedPointValue( 0 ) 
{
	std::cout << "[ Default constructor called ]" << std::endl;
}

Fixed::Fixed( const Fixed& copy ) : _fixedPointValue( copy._fixedPointValue )
{
	std::cout << "[ Copy constructor called ]" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "[ Destructor called ]" << std::endl;
}

int		Fixed::getRawBits( void ) const
{
	std::cout << "[ getRawBits called ]" << std::endl;
	return (this->_fixedPointValue);
}

void	Fixed::setRawBits( int const raw )
{
	this->_fixedPointValue = raw;
}

Fixed& Fixed::operator=( const Fixed& fixed )
{
	std::cout << "[ Assignation operator called ]" << std::endl;
	this->_fixedPointValue = fixed.getRawBits();

	return (*this);
}
