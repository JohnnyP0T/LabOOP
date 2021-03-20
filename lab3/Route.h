#pragma once
#include <string>

/// @brief ������� ������������� ����������.
struct Route
{
	/// @brief �����.
	int RouteNumber;
	/// @brief ������� �����������������.
	int DurationInMitutes;
	/// @brief ������� ����������.
	int FrequencyInMitutes;
	/// @brief ���������� ���������.
	int NumberStops;
	/// @brief ������ �������� ���������.
	std::string* Stops;
};

/// @brief 3.2.6 ������ � ������-���������.
void DemoRoute();

/// @brief ������ � ������� �����.
/// @param route ������.
void ReadRouteFromConsole(Route& route);

/// @brief ����� �� ������� �����.
/// @param route ������.
void WriteRouteToConsole(Route& route);

/// @brief ����� �������� �� ���������.
/// @param routes ������ ���������.
/// @param routeCount ���������� ���������.
/// @param route ������� ��� ������.
/// @return ������.
int FindRouteTo(Route* routes, int routeCount, std::string& route);