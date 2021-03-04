#pragma once

#include<string>

//2.2.7.1

/// @brief ����������.
struct Circle
{
	/// @brief ���������� X.
	double X;

	/// @brief ���������� Y.
	double Y;

	/// @brief ������.
	double Radius;

	/// @brief ����.
	std::string Color;
};


/// @brief �����������.
/// @param x ���������� X.
/// @param y ���������� Y.
/// @param radius ������.
/// @param color ����.
/// @return ��������� �� ��������� ������.
Circle* MakeCircle(const double x, const double y, const double radius, std::string& color);

/// @brief ����������� �����������.
Circle* CopyCircle(Circle&);