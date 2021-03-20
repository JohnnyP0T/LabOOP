#pragma once

/// @brief �����.
class Point
{
private:
	/// @brief ���������� x.
	double _x;
	/// @brief ���������� y.
	double _y;
public:
	/// @brief �����������.
	/// @param x ���������� x.
	/// @param y ���������� y.
	Point(double x, double y);

	/// @brief ����� ��� ���������� x.
	/// @param x ���������� x.
	void SetX(double x);

	/// @brief ����� ��� ���������� y.
	/// @param y ���������� y.
	void SetY(double y);

	/// @brief ����� ��� ���������� x.
	/// @return ���������� x.
	double GetX();

	/// @brief ����� ��� ���������� y.
	/// @return ���������� y.
	double GetY();
};

