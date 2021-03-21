#pragma once

#include "Point.h"

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
	/// @param point Центр.
	/// @param length Длина.
	/// @param width Ширина.
	Rectangle(Point* center, double length, double width);
	
	/// @brief Сетер для поля центр.
	/// @param center Центр.
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

//TODO: не является частью класса. Перенеси в другой файл Demo.h и соответственно перенести в cpp файл
/// @brief 3.3.4 - Агрегирование.
void DemoRectangleWithPoint();