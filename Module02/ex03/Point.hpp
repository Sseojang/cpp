#ifndef POINT_HPP
# define POINT_HPP

# include <iostream>
# include "Fixed.hpp"

class Point
{
private:
	Fixed const x;
	Fixed const y;
public:
	Point();
	~Point(); 
	Point(const float x, const float y);
	Point(const Point& ref);
	Point& operator=(const Point& ref);
	Point operator-(const Point& ref) const;
	
	Fixed getX(void) const;
	Fixed getY(void) const;

};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif /*POINT_HPP*/