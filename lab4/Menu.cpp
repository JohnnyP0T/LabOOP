#include <iostream>
#include "GeometricProgram.h"
#include "IO.h"
#include "Menu.h"

void Menu()
{
	setlocale(LC_ALL, "Russian");
	while (true)
	{
		std::cout << "DemoRing  Демофункция кольца - 4.4.6. Введите: 0\n"
			<< "DemoCollision Демонстрация расчета столкновений - 4.5.5. Введите: 1\n"
			<< "DemoRectangleWithPointClass Демонстрационая функция. Введите: 2\n";
		int valueForMenu = GetElementConsoleInt();
		switch (static_cast<MenuType>(valueForMenu))
		{
			case MenuType::DemoRing:
			{
				GeometricProgram::DemoRing();
				system("pause");
				break;
			}
			case MenuType::DemoCollision:
			{
				GeometricProgram::DemoCollision();
				system("pause");
				break;
			}
			case MenuType::DemoRectangleWithPointClass:
			{
				GeometricProgram::DemoRectangleWithPointClass();
				system("pause");
				break;
			}
			default:
			{
				std::cout << "try again";
				system("pause");
				break;
			}
		}
	}
}