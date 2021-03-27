#pragma once

/// @brief Точка
// TODO: между полями и методами должны быть отступы в одну строку
class Point
{
private:
	/// @brief Координата x.
	double _x;
	/// @brief Координата y.
	double _y;

	/// @brief Сетер координаты x.
	/// @param x Координата x.
	void SetX(double x);
	/// @brief Сетер координаты y.
	/// @param y Координата y. 
	void SetY(double y);

public:
	/// @brief Гетер координаты x.
	/// @return Координата x.
	double GetX() const;
	/// @brief Гетер координаты y.
	/// @return Координата y.
	double GetY() const;
	
	/// @brief Конструктор.
	/// @param x Координата x.
	/// @param y Координата y. 
	Point(double x, double y);
};

