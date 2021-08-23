#include "Point.hpp"

static float	getPointPositionRegardingSideLine(Point const point,
				Point const a, Point const b)
{
	return ((a.getXFloat() - point.getXFloat()) * (b.getYFloat() - a.getYFloat())
		- (b.getXFloat() - a.getXFloat()) * (a.getYFloat() - point.getYFloat()));
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	float	sideAB;
	float	sideBC;
	float	sideCA;

	sideAB = getPointPositionRegardingSideLine(point, a, b);
	sideBC = getPointPositionRegardingSideLine(point, b, c);
	sideCA = getPointPositionRegardingSideLine(point, c, a);

	if ((sideAB < 0 && sideBC < 0 && sideCA < 0) ||
			(sideAB > 0 && sideBC > 0 && sideCA > 0))
		return (true);
	return (false);
}