#include <iostream>
#include "GeometricProgram.h"
#include "IO.h"
#include "Menu.h"

void Menu()
{
	setlocale(LC_ALL, "Russian");
	while (true)
	{
		std::cout << "DemoRing  ����������� ������ - 4.4.6. �������: 0\n"
			<< "DemoCollision ������������ ������� ������������ - 4.5.5. �������: 1\n"
			<< "DemoRectangleWithPointClass ��������������� �������. �������: 2\n";
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