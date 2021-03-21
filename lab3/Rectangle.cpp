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

void DemoRectangleWithPoint()
{
	const int arrayCount = 5;
	Point* point = new Point[arrayCount]
	{
		Point(3,4),
		Point(4.3,3.7),
		Point(8,5),
		Point(13,5),
		Point(2.5, 9.54)
	};
	
	Rectangle* rectangle = new Rectangle[arrayCount]
	{
		Rectangle(&point[0], 5, 5),
		Rectangle(&point[1], 8, 34.45),
		Rectangle(&point[2], 10, 8.3),
		Rectangle(&point[3], 1, 2.865),
		Rectangle(&point[4], 2.5, 3),
	};

	double xCenter = 0;
	double yCenter = 0;
	for(int i = 0; i < arrayCount; i++)
	{
		xCenter += rectangle[i].GetCenter()->GetX();
		yCenter += rectangle[i].GetCenter()->GetY();
		std::cout << "X = " << rectangle[i].GetCenter()->GetX()
			<< " Y = " << rectangle[i].GetCenter()->GetY()
			<< " Length = " << rectangle[i].GetLength()
			<< " Width = " << rectangle[i].GetWidth() << std::endl;
	}

	std::cout << "XCenter = " << static_cast<double>(xCenter / arrayCount);
	std::cout << "YCenter = " << static_cast<double>(yCenter / arrayCount);
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
