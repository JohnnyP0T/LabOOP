#pragma once

/// @brief �������� ������������ �����.
static class DoubleValidator
{
public:
	/// @brief �������� �� ����.
	/// @param value ��������.
	/// @retval true �������� �������������.
	/// @retval false �������� �������������.
	static bool IsValuePositive(double value);
	/// @brief �������� �� ��������. 
	/// @param value ��������.
	/// @param min �������� ��.
	/// @param max �������� ��.
	/// @retval true �������� ������ � ��������.
	/// @retval false �������� �� ������ � ��������.
	static bool IsValueInRange(double value, double min,
		double max);
	/// @brief �������� �� ������������� �����.
	/// @param value ��������.
	static void AssertPositiveValue(double value);
	/// @brief �������� �� ��������.(� �����������) 
	/// @param value ��������.
	/// @param min �������� ��.
	/// @param max �������� ��.
	static void AssertValueInRange(double value, double min,
		double max);
};

