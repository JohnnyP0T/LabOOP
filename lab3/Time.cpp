#include <exception>

#include "Time.h"


Time::Time(const int year, const int month, const int day, const int hour, const int minute)
{
	this->SetYear(year);
	this->SetMonth(month);
	this->SetDay(day);
	this->SetHour(hour);
	this->SetMinute(minute);
}


void Time::SetYear(const int year)
{
	if (year < 0)
	{
		throw std::exception("Год не может быть отрицательным");
	}
	this->_year = year;
}


void Time::SetMonth(const int month)
{
	if (month <= 0 || month > 12)
	{
		throw std::exception("Некорректный месяц");
	}
	this->_month = month;
}


void Time::SetDay(const int day)
{
	if (day <= 0 || day > 30)
	{
		throw std::exception("Некорректный день");
	}
	this->_day = day;
}


void Time::SetHour(const int hour)
{
	if (hour <= 0 || hour > 24)
	{
		throw std::exception("Incorrect hour");
	}
	this->_hour = hour;
}


void Time::SetMinute(const int minute)
{
	if (minute < 0 || minute > 60)
	{
		throw std::exception("Некорректное час");
	}
	this->_minute = minute;
}


int Time::GetYear() const
{
	return this->_year;
}


int Time::GetMonth() const
{
	return this->_month;
}


int Time::GetDay() const
{
	return this->_day;
}


int Time::GetHour() const
{
	return this->_hour;
}


int Time::GetMinute() const
{
	return this->_minute;
}
