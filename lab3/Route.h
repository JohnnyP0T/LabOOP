#pragma once
#include <string>

/// @brief Маршрут общественного транспорта.
struct Route
{
	/// @brief Номер.
	int RouteNumber;
	/// @brief Средняя продолжительность.
	int DurationInMitutes;
	/// @brief Частота следования.
	int FrequencyInMitutes;
	/// @brief Количество остановок.
	int NumberStops;
	/// @brief Массив названий остановок.
	std::string* Stops;
};

/// @brief 3.2.6 Работа с полями-массивами.
void DemoRoute();

/// @brief Чтение с консоли полей.
/// @param route Объект.
void ReadRouteFromConsole(Route& route);

/// @brief Вывод на консоль полей.
/// @param route Объект.
void WriteRouteToConsole(Route& route);

/// @brief Поиск маршрута по сотановке.
/// @param routes Массив маршуртов.
/// @param routeCount Количество маршрутов.
/// @param route Маршрут для поиска.
/// @return Индекс.
int FindRouteTo(Route* routes, int routeCount, std::string& route);