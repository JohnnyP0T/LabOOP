#pragma once

/// @brief �����
class Point
{
private:
	/// @brief ���������� x.
	double _x;
	/// @brief ���������� y.
	double _y;

	/// @brief ����� ���������� x.
	/// @param x ���������� x.
	void SetX(double x);
	/// @brief ����� ���������� y.
	/// @param y ���������� y. 
	void SetY(double y);

public:
	/// @brief ����� ���������� x.
	/// @return ���������� x.
	double GetX() const;
	/// @brief ����� ���������� y.
	/// @return ���������� y.
	double GetY() const;
	
	/// @brief �����������.
	/// @param x ���������� x.
	/// @param y ���������� y. 
	Point(double x, double y);
};

