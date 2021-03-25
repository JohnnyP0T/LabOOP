#include "Point.h"


Point::Point(const double x, const double y)
{
	this->SetX(x);
	this->SetY(y);
}


void Point::SetX(const double x)
{
	this->_x = x;
}


void Point::SetY(const double y)
{
	this->_y = y;
}


double Point::GetX() const
{
	return this->_x;
}


double Point::GetY() const
{
	return this->_y;
}
