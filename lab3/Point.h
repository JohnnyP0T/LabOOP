#pragma once

/// @brief Точка.
class Point
{
private:
	/// @brief Координата x.
	double _x;
	/// @brief Координата y.
	double _y;
public:
	/// @brief Конструктор.
	/// @param x Координата x.
	/// @param y Координата y.
	Point(double x, double y);

	/// @brief Сетер для координаты x.
	/// @param x Координата x.
	void SetX(double x);

	/// @brief Сетер для координаты y.
	/// @param y Координата y.
	void SetY(double y);

	/// @brief Гетер для координаты x.
	/// @return Координата x.
	double GetX();

	/// @brief Гетер для координаты y.
	/// @return Координата y.
	double GetY();
};

