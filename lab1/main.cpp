#include <iostream>

#include "Point.h"
#include "IOMenu.h"


/*
 * Базовые элементы
 * процедурного программирования
 */


int main()
{
	setlocale(LC_ALL, "Russian");
	
	
	while(true)
	{
		std::cout
			// Дебаг
			<< "1111 - проверить какие значения принимает переменная sum\n"
			<< "1112 - sum на 777 итерации\n"
			// Массивы
			<< "1121 - массивы\n"
			<< "1122 - массивы\n"
			<< "1123 - массивы\n"
			// Функции
			<< "1132 - возведение в степень\n"
			<< "1133 - округление\n"
			// Динамическая память
			<< "1151 - выделение памяти под массив вещественных чисел\n"
			<< "1152 - выделение памяти под булевый массив\n"
			<< "1153 - выделение памяти под массив символов\n"
			<< "1154 - 1151 + сортировка\n"
			<< "1155 - поиск в целочисленном массиве\n"
			<< "1156 - поиск букв в массиве символов\n"
			<< "1157 - создание рандомных массивов\n"
			<< "1158 - проверка на утечку памяти\n";
		std::cout << "\nEnter point: \n";
		const int valueMenu = GetElementConsoleInt();
		switch (valueMenu)
		{
		case 1111:
			{
			Point1111();
			system("pause");
			break;
			}
		case 1112:
			{
			Point1112();
			system("pause");
			break;
			}
		case 1121:
			{
			Point1121();
			system("pause");
			break;
			}
		case 1122:
			{
			Point1122();
			system("pause");
			break;
			}
		case 1123:
			{
			Point1123();
			system("pause");
			break;
			}
		case 1132:
			{
			Point1132();
			system("pause");
			break;
			}
		case 1133:
			{
			Point1133();
			system("pause");
			break;
			}
		case 1151:
			{
			Point1151();
			system("pause");
			break;
			}
		case 1152:
			{
			Point1152();
			system("pause");
			break;
			}
		case 1153:
			{
			Point1153();
			system("pause");
			break;
			}
		case 1154:
			{
			Point1154();
			system("pause");
			break;
			}
		case 1155:
			{
			Point1155();
			system("pause");
			break;
			}
		case 1156:
			{
			Point1156();
			system("pause");
			break;
			}
		case 1157:
			{
			Point1157();
			system("pause");
			break;
			}
		case 1158:
			{
			Point1158();
			system("pause");
			break;
			}
		case 1:
			{
				//TODO дополнительное задание
			}
		default:
			{
			std::cout << "error input\n";
			system("pause");
			break;
			}
		}
		system("cls");
	}
}



