#include "DoubleValidator.h"
#include <exception>


bool DoubleValidator::IsValuePositive(const double value)
{
	if (value < 0)
	{
		return false;
	}
	return true;
}


bool DoubleValidator::IsValueInRange(const double value, const double min,
	const double max)
{
	if (value < min || value > max)
	{
		return  false;
	}
	return true;
}


void DoubleValidator::AssertPositiveValue(const double value)
{
	if (value < 0)
	{
		throw std::exception("������ �� ����� ���� �������������");
	}
}


void DoubleValidator::AssertValueInRange(const double value, const double min, 
	const double max)
{
	if (value < min || value > max)
	{
		throw std::exception("�������� �� ������ � ��������");
	}
}