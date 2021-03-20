#include "Point.h"


Point::Point(const double x, const double y)
{
	this->_x = x;
	this->_y = y;
}


void Point::SetX(const double x)
{
	this->_x = x;
}


void Point::SetY(const double y)
{
	this->_y = y;
}


double Point::GetX()
{
	return this->_x;
}


double Point::GetY()
{
	return this->_y;
}
