#include <exception>

#include "iostream"
#include "Ring.h"
#include "Rectangle.h"
#include "CollisionManager.h"
#include "GeometricProgram.h"


void GeometricProgram::DemoRing()
{
	Point* point1 = new Point(1.2, 5.2);
	Point* point2 = new Point(5.2, 8.2);
	try
	{
		Ring* ring1 = new Ring(12, 13, point1);
	}
	catch (std::exception e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Ring* ring2 = new Ring(-1, 2, point2);
	}
	catch (std::exception e)
	{
		std::cout << e.what() << std::endl;
	}
	delete point1;
	delete point2;

	Ring* ring3 = new Ring(12, 5, new Point(4.5, 6.6));
	std::cout << "Ring area: " << ring3->GetAria() << std::endl;
	std::cout << "Ring count: " << Ring::GetAllRingsCount() << std::endl;
	Ring* ring4 = new Ring(12, 5, new Point(4.5, 6.6));
	std::cout << "Ring count: " << Ring::GetAllRingsCount() << std::endl;
	Ring* ring5 = new Ring(12, 5, new Point(4.5, 6.6));
	std::cout << "Ring count: " << Ring::GetAllRingsCount() << std::endl;

	Ring* ring = new Ring(10.0, 5.0, new Point(25.0, 25.0));
	std::cout << "Ring count: " << Ring::GetAllRingsCount() << std::endl;
	delete ring;
	std::cout << "Ring count: " << Ring::GetAllRingsCount() << std::endl;
	delete ring3;
	delete ring4;
	delete ring5;
}

void GeometricProgram::DemoCollision()
{
	Point* point1 = new Point(1.4, 6.2);
	Point* point2 = new Point(4, 2);
	Rectangle* rectangle1 = new Rectangle(point1, 0, 0);
	Rectangle* rectangle2 = new Rectangle(point2, 1, 1);
	if (CollisionManager::IsCollision(*rectangle1, *rectangle2))
	{
		std::cout << "Пересекает." << std::endl;
	}
	else
	{
		std::cout << "Не пересекает." << std::endl;
	}
	delete rectangle1;
	delete rectangle2;

	Ring* ring1 = new Ring(12, 10, new Point(0, 0));
	Ring* ring2 = new Ring(12, 10, new Point(5, 5));
	if (CollisionManager::IsCollision(*ring1, *ring2))
	{
		std::cout << "Пересекает." << std::endl;
	}
	else
	{
		std::cout << "Не пересекает." << std::endl;
	}
	delete ring1;
	delete ring2;
	delete point1;
	delete point2;
}

void GeometricProgram::DemoRectangleWithPointClass()
{
	const int COUNT = 5;
	Rectangle* rectangles[COUNT];
	Point point[COUNT]
	{
		Point(1,4),
		Point(4,2),
		Point(0,6.3),
		Point(4,5),
		Point(10.3,8.9)
	};
	
	rectangles[0] = new Rectangle(&point[0], 8.1, 25.23);
	rectangles[1] = new Rectangle(&point[1], 1, 100.4);
	rectangles[2] = new Rectangle(&point[2], 25, 5.3);
	rectangles[3] = new Rectangle(&point[3], 4.76, 6.4);
	rectangles[4] = new Rectangle(&point[4], 84, 6);

	for (int i = 0; i < COUNT; i++)
	{
		std::cout << "X = " << rectangles[i]->GetCenter()->GetX()
			<< "\tY = " << rectangles[i]->GetCenter()->GetY()
			<< "\tLength = " << rectangles[i]->GetLength()
			<< "\tWidth = " << rectangles[i]->GetWidth() << std::endl;
	}

	double xCenter = 0.0;
	double yCenter = 0.0;
	for (int i = 0; i < COUNT; i++)
	{
		xCenter += rectangles[i]->GetCenter()->GetX();
		yCenter += rectangles[i]->GetCenter()->GetY();
	}

	xCenter /= COUNT;
	yCenter /= COUNT;
	std::cout << "Xcenter = " << xCenter << " Ycenter = " << yCenter << std::endl;

	for (int i = 0; i < COUNT; i++)
	{
		delete rectangles[i];
	}
}