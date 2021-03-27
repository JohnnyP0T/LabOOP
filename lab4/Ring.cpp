#include <exception>

#include "Ring.h"

#include "DoubleValidator.h"

int Ring::AllRingsCount = 0;

Ring::Ring(const double outerRadius, const double innerRadius, Point* center)
{
	this->SetRadius(outerRadius, innerRadius);
	this->SetCenter(center);
	++AllRingsCount;
}


Ring::~Ring()
{
	delete this->_center;
	--AllRingsCount;
}


void Ring::SetRadius(const double outerRadius, const double innerRadius)
{
	DoubleValidator::AssertPositiveValue(outerRadius);
	DoubleValidator::AssertPositiveValue(innerRadius);

	if (innerRadius > outerRadius)
	{
		throw std::exception("Внутренний радиус не может быть больше внешнего радиуса.");
	}

	this->_outerRadius = outerRadius;
	this->_innerRadius = innerRadius;
}


void Ring::SetCenter(Point* center)
{
	delete this->_center;
	this->_center = center;
}


double Ring::GetOuterRadius() const
{
	return this->_outerRadius;
}


double Ring::GetInnerRadius() const
{
	return this->_innerRadius;
}


Point* Ring::GetCenter() const
{
	return this->_center;
}


double Ring::GetAria() const
{
	const double PI = 3.1415;
	double outerArea = PI * pow(this->GetOuterRadius(), 2);
	double innerArea = PI * pow(this->GetInnerRadius(), 2);
	return outerArea - innerArea;
}


int Ring::GetAllRingsCount()
{
	return Ring::AllRingsCount;
}

