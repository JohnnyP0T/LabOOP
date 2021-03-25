#pragma once

/// @brief Проверка вещественных чисел.
static class DoubleValidator
{
public:
	/// @brief Проверка на знак.
	/// @param value Значение.
	/// @retval true Значение положительное.
	/// @retval false Значение отрицательное.
	static bool IsValuePositive(double value);
	/// @brief Проверка на диапазон. 
	/// @param value Значение.
	/// @param min Диапазон от.
	/// @param max Диапазон до.
	/// @retval true Значение входит в диапазон.
	/// @retval false Значение не входит в диапазон.
	static bool IsValueInRange(double value, double min,
		double max);
	/// @brief Проверка на отрицательное число.
	/// @param value Значение.
	static void AssertPositiveValue(double value);
	/// @brief Проверка на диапазон.(с исключением) 
	/// @param value Значение.
	/// @param min Диапазон от.
	/// @param max Диапазон до.
	static void AssertValueInRange(double value, double min,
		double max);
};

