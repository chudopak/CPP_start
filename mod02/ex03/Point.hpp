#ifndef POINT_HPP
# define POINT_HPP

# include <iostream>
# include "Fixed.hpp"

class Point
{
private:
	Fixed const	_x;
	Fixed const _y;

public:
	Point(void);
	Point(Point const &copy);
	Point(float const &x, float const &y);
	~Point(void);

	Point&	operator=(Point const & src);

	Fixed	getX(void) const;
	Fixed	getY(void) const;
	float	getXFloat(void) const;
	float	getYFloat(void) const;
};	

std::ostream&	operator<<(std::ostream &out, Point const &src);
bool			bsp(Point const a, Point const b, Point const c, Point const point);

#endif