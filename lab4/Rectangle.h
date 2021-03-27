#pragma once

#include "Point.h"

// TODO: между полями и методами должны быть отступы в одну строку
/// @brief Прямоугольник.
class Rectangle
{
private:
	/// @brief Центр.
	Point* _center;
	/// @brief Длина.
	double _length;
	/// @brief Ширина.
	double _width;
public:
	/// @brief Конструктор.
	/// @param center Центр.
	/// @param length Длина.
	/// @param width Ширина.
	Rectangle(Point* center, double length, double width);

	/// @brief Сетер для поля центр.
	/// @param center Центр.
	//TODO: у кольца передается Х и Y, а тут сразу Point. Не лучше использовать что-то одно?
	void SetCenter(Point* center);

	/// @brief Сетер для длины.
	/// @param length Длина.
	void SetLength(double length);

	/// @brief Сетер для ширины.
	/// @param width Ширина.
	void SetWidth(double width);

	/// @brief Гетер для центра.
	/// @return Центр.
	Point* GetCenter() const;

	/// @brief Гетер для длины.
	/// @return Длина.
	double GetLength() const;

	/// @brief Гетер для ширины.
	/// @return Ширина.
	double GetWidth() const;
};

