#pragma once

#include <string>

#include "Time.h"

/// @brief Авиарейс.
class Flight
{
private:
	/// @brief Номер рейса.
	std::string _flightNumber;
	/// @brief Пунтк отправления.
	std::string _from;
	/// @brief Пункт назначения.
	std::string _purpose;
	/// @brief Время отправления.
	Time* _departureTime;
	/// @brief Время прибытия.
	Time* _purposeTime;

public:
	/// @brief Сетер номера рейса.
	/// @param flightNumber Номер рейса.
	void SetFlightNumber(std::string& flightNumber);

	/// @brief Сетер пунтка отправления.
	/// @param from Пункт отправления.
	void SetFrom(std::string& from);

	/// @brief Сетер пункта назначения.
	/// @param purpose Пункт назначения.
	void SetPurpose(std::string& purpose);

	/// @brief Сетер времени отправления.
	/// @param departureTime Время отправления.
	void SetDepartureTime(Time* departureTime);

	/// @brief Сетер времени прибытия.
	/// @param purposeTime Время прибытия.
	void SetPurposeTime(Time* purposeTime);

	/// @brief Гетер номера рейса.
	/// @return Номер рейса.
	std::string GetFlightNumber() const;

	/// @brief Гетер пункта отправления.
	/// @return Пунтк отправления.
	std::string GetFrom() const;

	/// @brief Гетер пунтка назначения.
	/// @return Пункт назначения.
	std::string GetPurpose() const;

	/// @brief Гетер времени отправления.
	/// @return Время отправления.
	Time* GetDepartureTime() const;

	/// @brief Гетер времени прибытия.
	/// @return Время прибытия.
	Time* GetPurposeTime() const;

	/// @brief Гетер минут.
	/// @return Минуты.
	int GetFlightTimeMinutes() const;

	/// @brief Конструктор.
	/// @param flightNumber Номер рейса. 
	/// @param from Пункт отправления.
	/// @param purpose Пункт прибытия.
	/// @param departureTime Время отправления.
	/// @param purposeTime Время прибытия.
	Flight(std::string& flightNumber, std::string& from,
		std::string& purpose, Time* departureTime,
		Time* purposeTime);
};

//TODO: не является частью класса. Перенеси в другой файл Demo.h и соответственно перенести в cpp файл
