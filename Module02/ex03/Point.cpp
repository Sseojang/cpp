#include "Point.hpp"

Point::Point()
{

}

Point::~Point()
{

}

Point::Point(const float x, const float y) : x(x), y (y)
{
	
}

Point::Point(const Point& ref) : x(ref.getX()) , y (ref.getY())
{

}

Point& Point::operator=(const Point& ref)
{
	if (this != &ref)
	{
		const_cast<Fixed&>(x) = ref.getX();
		const_cast<Fixed&>(y) = ref.getX();
	}
	return *this;
}

Fixed Point::getX(void) const
{
	return x;
}

Fixed Point::getY(void) const
{
	return y;
}

Point Point::operator-(const Point& ref) const
{
	return Point((this->getX() - ref.getX()).toFloat(), (this->getY() - ref.getY()).toFloat());
}

Fixed cross(const Point& u, const Point& v)
{
	return (u.getX() * v.getY()) - (u.getY() * v.getX());
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed c1 = cross(b - a, point - a);
	Fixed c2 = cross(c - b, point - b);
	Fixed c3 = cross(a - c, point - c);

	bool all_positive = (c1 > Fixed(0)) && (c2 > Fixed(0)) && (c3 > Fixed(0));
	bool all_negative = (c1 < Fixed(0)) && (c2 < Fixed(0)) && (c3 < Fixed(0));

	return all_positive || all_negative;
}
