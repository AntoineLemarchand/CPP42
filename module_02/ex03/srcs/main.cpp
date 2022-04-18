#include <iostream>
#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int main( void ) {

	Point const A = Point(1., 3.);
	Point const B = Point(6., 5.);
	Point const C = Point(3., 8.);

	Point const isInside = Point(3., 5.);
	Point const isOutside = Point(4., 3.);
	Point const isVertice = Point(B);
	Point const isSide = Point(5., 6.);

	std::cout << "point inside  :" << bsp(A, B, C, isInside) << std::endl;
	std::cout << "point outside :" << bsp(A, B, C, isOutside) << std::endl;
	std::cout << "Vertice       :" << bsp(A, B, C, isVertice) << std::endl;
	std::cout << "point on side :" << bsp(A, B, C, isSide) << std::endl;

	return 0;
}
