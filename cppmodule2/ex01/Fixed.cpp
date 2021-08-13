#include "Fixed.hpp"

const int	Fixed::_bits = 8;

/* CONSTRUCTORS / DESTRUCTOR */

Fixed::Fixed() : _fixedPointValue( 0 ) 
{
	std::cout << "[ Default constructor called ]" << std::endl;
}

Fixed::Fixed( const Fixed& copy )
	: _fixedPointValue( copy._fixedPointValue )
{
	std::cout << "[ Copy constructor called ]" << std::endl;
}

Fixed::Fixed( const int num )
	: _fixedPointValue( num * (1 << Fixed::_bits) )
{
	std::cout << "[ Int constructor called ]" << std::endl;
}

Fixed::Fixed( const float num )
	: _fixedPointValue( static_cast<int>(roundf(num * (1 << Fixed::_bits)) ) )
{
	std::cout << "[ Float constructor called ]" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "[ Destructor called ]" << std::endl;
}

/* MEMBER FUNCTIONS */

int		Fixed::getRawBits( void ) const
{
	std::cout << "[ getRawBits called ]" << std::endl;
	return (this->_fixedPointValue);
}

void	Fixed::setRawBits( int const raw )
{
	this->_fixedPointValue = raw;
}

float	Fixed::toFloat( void ) const
{
	return (static_cast<float>(this->_fixedPointValue) / static_cast<float>(1 << Fixed::_bits));
}

int		Fixed::toInt( void ) const
{
	return (static_cast<int>(this->_fixedPointValue / (1 << Fixed::_bits)));
}

/* OPERATOR OVERLOADS */

Fixed& Fixed::operator=( const Fixed& fixed )
{
	std::cout << "[ Assignation operator called ]" << std::endl;
	this->_fixedPointValue = fixed.getRawBits();

	return (*this);
}

std::ostream& operator<<( std::ostream& stream, const Fixed& ref)
{
	stream << ref.toFloat(); 

	return (stream);
}
