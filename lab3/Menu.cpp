#include <iostream>

#include "IO.h"
#include "Menu.h"
#include "Book.h"
#include "Route.h"
#include "Rectangle.h"
#include "Flight.h"
#include "Band.h"

void Menu()
{
	setlocale(LC_ALL, "Russian");
	while (true)
	{
		std::cout << "DemoBook - 3.2.2 ������ � ������-���������. = 0\n"
			<< "DemoRoute - 3.2.6 ������ � ������-��������� = 1\n"
			<< "DemoRectangleWithPoint - 3.3.4 ������������� = 2\n"
			<< "DemoFlightWithTime - 3.3.9 ������������� = 3\n";
		
		int valueForMenu = GetElementConsoleInt();
		switch (static_cast<MenuType>(valueForMenu))
		{
			case MenuType::DemoBook:
			{
				DemoBook();
				system("pause");
				break;
			}
			case MenuType::DemoRoute:
			{
				DemoRoute();
				system("pause");
				break;
			}
			case MenuType::DemoRectangle:
			{
				DemoRectangleWithPoint();
				system("pause");
				break;
			}
			case MenuType::DemoFlightWithTime:
			{
				DemoFlightWithTime();
				system("pause");
				break;
			}
			case MenuType::DemoBand:
			{
				DemoBand();
				system("pause");
				break;
			}
			default:
			{
				std::cout << "try again\n";
				system("pause");
				break;
			}
		}
	}
}