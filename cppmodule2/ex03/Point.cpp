#include "Point.hpp"

Point::Point( void )
	: _x( 0 ), _y( 0 )
{
}

Point::Point( const Point& copy )
	: _x( copy._x ), _y( copy._y )
{
}

Point::Point( const float x, const float y )
	: _x( x ), _y( y )
{
}

Point::~Point()
{
}

Fixed		Point::getX( void ) const
{
	return (this->_x);
}

Fixed		Point::getY( void ) const
{
	return (this->_y);
}

bool		Point::operator==( const Point& point ) const
{
	return ( this->getX() == point.getX() && this->getY() == point.getY() );
}

Point& Point::operator=( const Point& point )
{
	const_cast<Fixed&>(this->_x) = point.getX();
	const_cast<Fixed&>(this->_y) = point.getY();

	return (*this);
}
