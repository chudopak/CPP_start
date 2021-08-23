#include "Point.hpp"

Point::Point(void) : _x(Fixed(0)), _y(Fixed(0)) {}

Point::Point(Point const &copy) : _x(copy.getX()), _y(copy.getY()) {}

Point::Point(float const &x, float const &y) : _x(Fixed(x)), _y(Fixed(y)) {}

Point::~Point(void) {}

Point&	Point::operator=(Point const & src) {
	//The fields can't be changed because it has const type
	if (this != &src)
		;
	return (*this);
}

Fixed	Point::getX(void) const {
	return (_x);
}

Fixed	Point::getY(void) const {
	return (_y);
}

float	Point::getXFloat(void) const {
	return (_x.toFloat());
}

float	Point::getYFloat(void) const {
	return (_y.toFloat());
}

std::ostream&	operator<<(std::ostream &out, Point const &src)
{
	out << "<" << src.getXFloat() << "," << src.getYFloat() << ">";
	return (out);
}