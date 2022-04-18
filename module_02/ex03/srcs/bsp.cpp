#include "Point.hpp"
#include <cmath>

static int area(Point const a, Point const b, Point const c)
{
	float aX = a.getX().toFloat();
	float aY = a.getY().toFloat();
	float bX = b.getX().toFloat();
	float bY = b.getY().toFloat();
	float cX = c.getX().toFloat();
	float cY = c.getY().toFloat();

	float ret = (aX * (bY - cY) + bX * (cY - aY) + cX * (aY - bY)) / 2.;
	if (ret < 0)
		return (-ret);
	return (ret);

}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	float area1 = area(point, b, c);
	float area2 = area(a, point, c);
	float area3 = area(a, b, point);

	if (!area1 || !area2 || !area3)
		return (false);
	return (area(a, b, c) == area1 + area2 + area3);
}

