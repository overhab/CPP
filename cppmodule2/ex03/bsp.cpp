#include "Point.hpp"

bool	bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed alpha, beta, gamma, zero( 0 ), one ( 1.0f );

	if (point == a || point == b || point == c)
		return false;
	alpha = ((b.getY() - c.getY()) * (point.getX() - c.getX()) + (c.getX() - b.getX()) * (point.getY() - c.getY())) /
		((b.getY() - c.getY()) * (a.getX() - c.getX()) + (c.getX() - b.getX()) * (a.getY() - c.getY()));
	beta = ((c.getY() - a.getY()) * (point.getX() - c.getX()) + (a.getX() - c.getX()) * (point.getY() - c.getY())) /
		((b.getY() - c.getY()) * (a.getX() - c.getX()) + (c.getX() - b.getX()) * (a.getY() - c.getY()));
	gamma = one - alpha - beta;

	return ( zero <= alpha && alpha <= one && zero <= beta && beta <= one && zero <= gamma && gamma <= one );
}
