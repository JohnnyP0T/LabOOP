#include <iostream>

#include "Point.h"
#include "IOMenu.h"


/*
 * ������� ��������
 * ������������ ����������������
 */


int main()
{
	setlocale(LC_ALL, "Russian");
	
	
	while(true)
	{
		std::cout
			// �����
			<< "1111 - ��������� ����� �������� ��������� ���������� sum\n"
			<< "1112 - sum �� 777 ��������\n"
			// �������
			<< "1121 - �������\n"
			<< "1122 - �������\n"
			<< "1123 - �������\n"
			// �������
			<< "1132 - ���������� � �������\n"
			<< "1133 - ����������\n"
			// ������������ ������
			<< "1151 - ��������� ������ ��� ������ ������������ �����\n"
			<< "1152 - ��������� ������ ��� ������� ������\n"
			<< "1153 - ��������� ������ ��� ������ ��������\n"
			<< "1154 - 1151 + ����������\n"
			<< "1155 - ����� � ������������� �������\n"
			<< "1156 - ����� ���� � ������� ��������\n"
			<< "1157 - �������� ��������� ��������\n"
			<< "1158 - �������� �� ������ ������\n";
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
				//TODO �������������� �������
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



