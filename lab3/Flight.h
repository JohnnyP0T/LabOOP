#pragma once

#include <string>

#include "Time.h"

/// @brief ��������.
class Flight
{
private:
	/// @brief ����� �����.
	std::string _flightNumber;
	/// @brief ����� �����������.
	std::string _from;
	/// @brief ����� ����������.
	std::string _purpose;
	/// @brief ����� �����������.
	Time* _departureTime;
	/// @brief ����� ��������.
	Time* _purposeTime;

public:
	/// @brief ����� ������ �����.
	/// @param flightNumber ����� �����.
	void SetFlightNumber(std::string& flightNumber);

	/// @brief ����� ������ �����������.
	/// @param from ����� �����������.
	void SetFrom(std::string& from);

	/// @brief ����� ������ ����������.
	/// @param purpose ����� ����������.
	void SetPurpose(std::string& purpose);

	/// @brief ����� ������� �����������.
	/// @param departureTime ����� �����������.
	void SetDepartureTime(Time* departureTime);

	/// @brief ����� ������� ��������.
	/// @param purposeTime ����� ��������.
	void SetPurposeTime(Time* purposeTime);

	/// @brief ����� ������ �����.
	/// @return ����� �����.
	std::string GetFlightNumber() const;

	/// @brief ����� ������ �����������.
	/// @return ����� �����������.
	std::string GetFrom() const;

	/// @brief ����� ������ ����������.
	/// @return ����� ����������.
	std::string GetPurpose() const;

	/// @brief ����� ������� �����������.
	/// @return ����� �����������.
	Time* GetDepartureTime() const;

	/// @brief ����� ������� ��������.
	/// @return ����� ��������.
	Time* GetPurposeTime() const;

	/// @brief ����� �����.
	/// @return ������.
	int GetFlightTimeMinutes() const;

	/// @brief �����������.
	/// @param flightNumber ����� �����. 
	/// @param from ����� �����������.
	/// @param purpose ����� ��������.
	/// @param departureTime ����� �����������.
	/// @param purposeTime ����� ��������.
	Flight(std::string& flightNumber, std::string& from,
		std::string& purpose, Time* departureTime,
		Time* purposeTime);
};

//TODO: �� �������� ������ ������. �������� � ������ ���� Demo.h � �������������� ��������� � cpp ����
/// @brief - 3.3.9 �������������.
void DemoFlightWithTime();