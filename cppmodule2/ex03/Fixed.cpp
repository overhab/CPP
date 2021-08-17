#include "Fixed.hpp"

const int	Fixed::_bits = 8;

/* CONSTRUCTORS / DESTRUCTOR */

Fixed::Fixed() : _fixedPointValue( 0 ) 
{
}

Fixed::Fixed( const Fixed& copy )
	: _fixedPointValue( copy._fixedPointValue )
{
}

Fixed::Fixed( const int num )
	: _fixedPointValue( num * (1 << Fixed::_bits) )
{
}

Fixed::Fixed( const float num )
	: _fixedPointValue( static_cast<int>(roundf(num * (1 << Fixed::_bits)) ) )
{
}

Fixed::~Fixed()
{
}

/* MEMBER FUNCTIONS */

int		Fixed::getRawBits( void ) const
{
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
	this->_fixedPointValue = fixed.getRawBits();

	return (*this);
}

Fixed	Fixed::operator+( const Fixed& fixed ) const
{
	return Fixed( this->toFloat() + fixed.toFloat() );
}

Fixed	Fixed::operator-( const Fixed& fixed ) const
{
	return Fixed( this->toFloat() - fixed.toFloat() );
}

Fixed	Fixed::operator*( const Fixed& fixed ) const
{
	return Fixed( this->toFloat() * fixed.toFloat() );
}

Fixed	Fixed::operator/( const Fixed& fixed ) const
{
	if (fixed.toFloat() == 0)
		return Fixed( 0 );
	return Fixed( this->toFloat() / fixed.toFloat() );
}

bool	Fixed::operator>( const Fixed& fixed ) const
{
	return this->getRawBits() > fixed.getRawBits();
}

bool	Fixed::operator<( const Fixed& fixed ) const
{
	return this->getRawBits() < fixed.getRawBits();
}

bool	Fixed::operator>=( const Fixed& fixed ) const
{
	return this->getRawBits() >= fixed.getRawBits();
}

bool	Fixed::operator<=( const Fixed& fixed ) const
{
	return this->getRawBits() <= fixed.getRawBits();
}

bool	Fixed::operator==( const Fixed& fixed ) const
{
	return this->getRawBits() == fixed.getRawBits();
}

bool	Fixed::operator!=( const Fixed& fixed ) const
{
	return this->getRawBits() != fixed.getRawBits();
}

Fixed&	Fixed::operator++( void )
{
	this->_fixedPointValue++;
	return (*this);
}

Fixed&	Fixed::operator--( void )
{
	this->_fixedPointValue--;
	return (*this);
}

Fixed	Fixed::operator++( int )
{
	this->_fixedPointValue++;
	return Fixed(*this);
}

Fixed	Fixed::operator--( int )
{
	this->_fixedPointValue--;
	return Fixed(*this);
}

/* STATIC MIN/MAX */

Fixed&	Fixed::min( Fixed& fixed1, Fixed& fixed2 )
{
	return (fixed1 < fixed2 ? fixed1 : fixed2);
}

Fixed&	Fixed::max( Fixed& fixed1, Fixed& fixed2 )
{
	return (fixed1 > fixed2 ? fixed1 : fixed2);
}

const Fixed&	Fixed::min( const Fixed& fixed1, const Fixed& fixed2 )
{
	return (fixed1 < fixed2 ? fixed1 : fixed2);
}

const Fixed&	Fixed::max( const Fixed& fixed1, const Fixed& fixed2 )
{
	return (fixed1 > fixed2 ? fixed1 : fixed2);
}

/* << OVERLOAD */

std::ostream& operator<<( std::ostream& stream, const Fixed& ref)
{
	stream << ref.toFloat(); 

	return (stream);
}
