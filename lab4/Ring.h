#pragma once

#include "Point.h"

/// @brief ������
class Ring
{
private:
	/// @brief ���������� �����.
	static int AllRingsCount;

	/// @brief ������� ������.
	double _outerRadius;
	/// @brief ���������� ������.
	double _innerRadius;
	/// @brief �����.
	Point* _center;
	
public:
	/// @brief �����������.
	/// @param outerRadius ���������� ������.
	/// @param innerRadius ������� ������.
	/// @param x ���������� x. 
	/// @param y ���������� y.
	Ring(double outerRadius, double innerRadius, double x,
		double y);
	~Ring();

	/// @brief ����� �������.
	/// @param outerRadius ������� ������.
	/// @param innerRadius ���������� ������.
	void SetRadius(double outerRadius, double innerRadius);
	/// @brief ����� ������.
	/// @param x ���������� x.
	/// @param y ���������� y.
	void SetCenter(double x, double y);

	/// @brief ����� ���������� ��������.
	/// @return ���������� ��������
	static int GetAllRingsCount();
	/// @brief ����� �������� �������.
	/// @return ������� ������.
	double GetOuterRadius() const;
	/// @brief ����� ����������� �������.
	/// @return ���������� ������.
	double GetInnerRadius() const;
	/// @brief ����� ������.
	/// @return �����.
	Point* GetCenter() const;

	/// @brief ����� �������.
	/// @return �������.
	double GetAria() const;
};

