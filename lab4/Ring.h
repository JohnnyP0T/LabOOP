#pragma once

#include "Point.h"

/// @brief Кольцо
class Ring
{
private:
	/// @brief Количество колец.
	static int AllRingsCount;

	/// @brief Внешний радиус.
	double _outerRadius;
	/// @brief Внутренний радиус.
	double _innerRadius;
	/// @brief Центр.
	Point* _center;
	
public:
	/// @brief Конструктор.
	/// @param outerRadius Внутренний радиус.
	/// @param innerRadius Внешний радиус.
	/// @param x Координата x. 
	/// @param y Координата y.
	Ring(double outerRadius, double innerRadius, double x,
		double y);
	~Ring();

	/// @brief Сетер радиуса.
	/// @param outerRadius Внещний радиус.
	/// @param innerRadius Внутренний радиус.
	void SetRadius(double outerRadius, double innerRadius);
	/// @brief Сетер центра.
	/// @param x Координата x.
	/// @param y Координата y.
	void SetCenter(double x, double y);

	/// @brief Гетер количества объектов.
	/// @return Количество объектов
	static int GetAllRingsCount();
	/// @brief Гетер внешнего радиуса.
	/// @return Внешний радиус.
	double GetOuterRadius() const;
	/// @brief Гетер внутреннего радиуса.
	/// @return Внутренний радиус.
	double GetInnerRadius() const;
	/// @brief Гетер центра.
	/// @return Центр.
	Point* GetCenter() const;

	/// @brief Гетер площади.
	/// @return Площадь.
	double GetAria() const;
};

