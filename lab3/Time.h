#pragma once

/// @brief Время.
class Time
{
private:
	/// @brief Год.
	int _year;
	/// @brief Месяц.
	int _month;
	/// @brief День.
	int _day;
	/// @brief Час.
	int _hour;
	/// @brief Минуты.
	int _minute;

public:
	/// @brief Сетер года.
	/// @param year Год.
	void SetYear(int year);
	
	/// @brief Сетер месяца.
	/// @param month Месяц.
	void SetMonth(int month);

	/// @brief Сетердня.
	/// @param day День.
	void SetDay(int day);

	/// @brief Сетер час.
	/// @param hour Час.
	void SetHour(int hour);

	/// @brief Сетер минут.
	/// @param minute Минуты.
	void SetMinute(int minute);

	/// @brief Гетер года.
	/// @return Год.
	int GetYear() const;

	/// @brief Гетер месяца.
	/// @return Месяц.
	int GetMonth() const;

	/// @brief Гетер дня.
	/// @return День.
	int GetDay() const;

	/// @brief Гетер часа.
	/// @return Час.
	int GetHour() const;

	/// @brief Гетер минут.
	/// @return Минуты.
	int GetMinute() const;

	/// @brief Конструктор
	/// @param year Год.
	/// @param month Месяц.
	/// @param day День.
	/// @param hour Час.
	/// @param minute Минуты.
	Time(int year, int month, int day, int hour, int minute);
};

