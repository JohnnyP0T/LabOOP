#include <cmath>

#include "CollisionManager.h"


bool CollisionManager::IsCollision(Rectangle& rectangle1, Rectangle& rectangle2)
{
	double x = abs(rectangle1.GetCenter()->GetX() -
		rectangle2.GetCenter()->GetX());
	double y = abs(rectangle1.GetCenter()->GetY() -
		rectangle2.GetCenter()->GetY());
	double length = abs(rectangle1.GetLength() -
		rectangle2.GetLength());
	double width = abs(rectangle1.GetWidth() -
		rectangle2.GetWidth());

	return (x < width / 2 && y < length / 2);
}


bool CollisionManager::IsCollision(Ring& ring1, Ring& ring2)
{
	double x = abs(ring1.GetCenter()->GetX() -
		ring2.GetCenter()->GetX());
	double y = abs(ring1.GetCenter()->GetY() -
		ring2.GetCenter()->GetY());
	double hypotenuse = sqrt(pow(x, 2) + pow(y, 2));

	return (hypotenuse < ring1.GetOuterRadius() + ring2.GetOuterRadius());
}