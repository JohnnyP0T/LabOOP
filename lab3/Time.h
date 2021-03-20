#pragma once

/// @brief �����.
class Time
{
private:
	/// @brief ���.
	int _year;
	/// @brief �����.
	int _month;
	/// @brief ����.
	int _day;
	/// @brief ���.
	int _hour;
	/// @brief ������.
	int _minute;

public:
	/// @brief ����� ����.
	/// @param year ���.
	void SetYear(int year);
	
	/// @brief ����� ������.
	/// @param month �����.
	void SetMonth(int month);

	/// @brief ��������.
	/// @param day ����.
	void SetDay(int day);

	/// @brief ����� ���.
	/// @param hour ���.
	void SetHour(int hour);

	/// @brief ����� �����.
	/// @param minute ������.
	void SetMinute(int minute);

	/// @brief ����� ����.
	/// @return ���.
	int GetYear() const;

	/// @brief ����� ������.
	/// @return �����.
	int GetMonth() const;

	/// @brief ����� ���.
	/// @return ����.
	int GetDay() const;

	/// @brief ����� ����.
	/// @return ���.
	int GetHour() const;

	/// @brief ����� �����.
	/// @return ������.
	int GetMinute() const;

	/// @brief �����������
	/// @param year ���.
	/// @param month �����.
	/// @param day ����.
	/// @param hour ���.
	/// @param minute ������.
	Time(int year, int month, int day, int hour, int minute);
};

