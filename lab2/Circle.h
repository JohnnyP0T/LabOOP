#pragma once

#include<string>

//2.2.7.1

/// @brief Окружность.
struct Circle
{
	/// @brief Координата X.
	double X;

	/// @brief Координата Y.
	double Y;

	/// @brief Радиус.
	double Radius;

	/// @brief Цвет.
	std::string Color;
};


/// @brief Конструктор.
/// @param x Координата X.
/// @param y Координата Y.
/// @param radius Радиус.
/// @param color Цвет.
/// @return Указатель на созаднный оюбект.
Circle* MakeCircle(const double x, const double y, const double radius, std::string& color);

/// @brief Конструктор копирования.
Circle* CopyCircle(Circle&);