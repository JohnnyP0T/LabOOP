#include <iostream>

#include "Rectangle.h"


Rectangle::Rectangle(Point* center, const double length, const double width)
{
	this->_center = center;
	this->_length = length;
	this->_width = width;
}


void Rectangle::SetCenter(Point* center)
{
	this->_center = center;
}


void Rectangle::SetLength(const double length)
{
	this->_length = length;
}


void Rectangle::SetWidth(const double width)
{
	this->_width = width;
}


Point* Rectangle::GetCenter() const
{
	return this->_center;
}


double Rectangle::GetLength() const
{
	return this->_length;
}


double Rectangle::GetWidth() const
{
	return this->_width;
}
