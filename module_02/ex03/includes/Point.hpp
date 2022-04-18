#pragma once
#include "Fixed.hpp"

class Point
{
	public:
		Point();
		Point(const float x, const float y);
		Point(const Point& point);
		Point& operator = (const Point& point);
		~Point();

		Fixed	getX( void ) const;
		Fixed	getY( void ) const;
		void	setX(Fixed x);
		void	setY(Fixed y);
	private:
		const Fixed _x;
		const Fixed _y;
};
