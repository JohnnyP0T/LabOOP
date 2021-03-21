#pragma once

#include "Point.h"

/// @brief �������������.
class Rectangle
{
private:
	/// @brief �����.
	Point* _center;
	/// @brief �����.
	double _length;
	/// @brief ������.
	double _width;
public:
	/// @brief �����������.
	/// @param point �����.
	/// @param length �����.
	/// @param width ������.
	Rectangle(Point* center, double length, double width);
	
	/// @brief ����� ��� ���� �����.
	/// @param center �����.
	void SetCenter(Point* center);
	
	/// @brief ����� ��� �����.
	/// @param length �����.
	void SetLength(double length);
	
	/// @brief ����� ��� ������.
	/// @param width ������.
	void SetWidth(double width);

	/// @brief ����� ��� ������.
	/// @return �����.
	Point* GetCenter() const;

	/// @brief ����� ��� �����.
	/// @return �����.
	double GetLength() const;

	/// @brief ����� ��� ������.
	/// @return ������.
	double GetWidth() const;
};

//TODO: �� �������� ������ ������. �������� � ������ ���� Demo.h � �������������� ��������� � cpp ����
/// @brief 3.3.4 - �������������.
void DemoRectangleWithPoint();