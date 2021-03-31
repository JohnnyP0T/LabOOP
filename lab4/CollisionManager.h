#pragma once

#include "Rectangle.h"

#include "Ring.h"

/// @brief Класс для проверки столкновений. - 4.5.4
static class CollisionManager
{
public:
	/// @brief Проверка на столкновение прямоугольников.
	/// @param rectangle1 Первый прямоугольник.
	/// @param rectangle2 Второй прямоугольник.
	/// @retval true не пересекаются.
	/// @retval false пересекаются.
	static bool IsCollision(Rectangle& rectangle1,
		Rectangle& rectangle2);
	
	/// @brief Проверка на столкновение колец.
	/// @param ring1 Первое кольцо.
	/// @param ring2 Второе кольцо.
	/// @retval true не пересекаются.
	/// @retval false пересекаются.
	static bool IsCollision(Ring& ring1, Ring& ring2);
};

