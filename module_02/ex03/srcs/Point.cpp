#include "Point.hpp"

Point::Point()
{}

Point::Point(const float x, const float y) : _x(Fixed(x)), _y(Fixed(y))
{}

Point::Point(const Point& point) : _x(point.getX()), _y(point.getY())
{
}

Point& Point::operator = (const Point& point)
{
	(void)point;
	std::cerr << "Point cannot be overloaded as its values are const" << std::endl;
	return (*this);
}

Point::~Point()
{};

Fixed	Point::getX( void ) const
{
	return (_x);
}

Fixed	Point::getY( void ) const
{
	return (_y);
}
