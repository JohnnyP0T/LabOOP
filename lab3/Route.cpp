#include <iostream>

#include "Route.h"
#include "IO.h"

void DemoRoute()
{
	const int COUNT = 2;
	Route routes[COUNT];
	for (int i = 0; i < COUNT; i++)
	{
		ReadRouteFromConsole(routes[i]);
	}
	std::cout << "������� �������� ��������� ��� ������ ��������: " << std::endl;
	std::string stop;
	std::getline(std::cin, stop);
	std::cout << std::endl;
	
	int foundIndex = FindRouteTo(routes, COUNT, stop);
	if (foundIndex < 0)
	{
		std::cout << "�� �������" << std::endl;
	}
	else
	{
		WriteRouteToConsole(routes[foundIndex]);
	}
}

void ReadRouteFromConsole(Route& route)
{
	std::cout << "����� ��������: ";
	route.RouteNumber = ReadPositiveNumber();
	std::cout << std::endl;
	std::cout << "����������������� �������� � �������: ";
	route.DurationInMitutes = ReadPositiveNumber();
	std::cout << std::endl;
	std::cout << "������� �������� � �������: ";
	route.FrequencyInMitutes = ReadPositiveNumber();
	std::cout << std::endl;
	std::cout << "���������� ���������: ";
	route.NumberStops = ReadPositiveNumber();
	std::cout << std::endl;

	route.Stops = new std::string[route.NumberStops];
	for (int i = 0; i < route.NumberStops; i++)
	{
		std::cout << "������� ���������: ";
		getline(std::cin, route.Stops[i]);
		std::cout << std::endl;
	}
}

void WriteRouteToConsole(Route& route)
{
	std::cout << "����� ��������: " << route.RouteNumber << std::endl;
	std::cout << "����������������� �������� � �������: " << route.DurationInMitutes << std::endl;
	std::cout << "������� �������� � �������: " << route.FrequencyInMitutes << std::endl;
	std::cout << "�������: " << std::endl;
	for (int i = 0; i < route.NumberStops - 1; i++)
	{
		std::cout << route.Stops[i] << "->";
	}
	std::cout << route.Stops[route.NumberStops - 1] << std::endl;
}

int FindRouteTo(Route* routes, int routesCount, std::string& stop)
{
	for (int i = 0; i < routesCount; i++)
	{
		for (int j = 0; j < routes[i].NumberStops; j++)
		{
			if (routes[i].Stops[j] == stop)
			{
				return i;
			}
		}
	}
	return -1;
}