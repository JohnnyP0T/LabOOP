#include <iostream>

#include "IOMenu.h"
#include "Point.h"

enum class Menu
{
	DemoSort = 1,
	DemoRectangle = 2,
	DemoFlight = 3,
	DemoMovie = 4,
	DemoTime = 5,
	DemoReadAndWriteRectangles = 6,
	DemoDynamicFlight = 7,
	DemoDynamicFlights = 8,
	DemoMovieWithGenre = 9,
	Exit = 0
};



int main()
{
	setlocale(LC_ALL, "Russian");
	while(true)
	{
		std::cout << "DemoSort = 1\n"
			<< "DemoRectangle = 2\n"
			<< "DemoFlight = 3\n"
			<< "DemoMovie = 4\n"
			<< "DemoTime = 5\n"
			<< "DemoReadAndWriteRectangles = 6\n"
			<< "DemoDynamicFlight = 7\n"
			<< "DemoDynamicFlights = 8\n"
			<< "DemoMovieWithGenre = 9\n"
			<< "Exit = 0\n";
		int valueForMenu = GetElementConsoleInt();
		switch (static_cast<Menu>(valueForMenu))
		{
			case Menu::DemoSort:
			{
				DemoSort();
				system("pause");
				break;
			}
			case Menu::DemoRectangle:
			{
				DemoRectangle();
				system("pause");
				break;
			}
			case Menu::DemoFlight:
			{
				DemoFlight();
				system("pause");
				break;
			}
			case Menu::DemoMovie:
			{
				DemoMovie();
				system("pause");
				break;
			}
			case Menu::DemoTime:
			{
				DemoTime();
				system("pause");
				break;
			}
			case Menu::DemoReadAndWriteRectangles:
			{
				DemoReadAndWriteRectangles();
				system("pause");
				break;
			}
			case Menu::DemoDynamicFlight:
			{
				DemoDynamicFlight();
				system("pause");
				break;
			}
			case Menu::DemoDynamicFlights:
			{
				DemoDynamicFlights();
				system("pause");
				break;
			}
			case Menu::DemoMovieWithGenre:
			{
				DemoMovieWithGenre();
				system("pause");
				break;
			}
			case Menu::Exit:
			{
				return 0;
			}
			default:
			{
				std::cout << "try again\n";
				system("pause");
				break;
			}
		}
		system("cls");
	}
}