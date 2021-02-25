#include <iostream>

#include "Point.h"

double GetElementConsoleDouble();

int GetElementConsoleMain();

void Invert(double* data);

int main()
{
	std::cout << "1111 1112 1121 1122 1123 1132 1133 1151 1152 1153 1154 1155 1156 1157\n";
	while(true)
	{
		std::cout << "\nEnter point: \n";
		const int valueMenu = GetElementConsoleMain();
		switch (valueMenu)
		{
		case 1111:
			{
			Point1111();
			break;
			}
		case 1112:
			{
			Point1112();
			break;
			}
		case 1121:
			{
			Point1121();
			break;
			}
		case 1122:
			{
			Point1122();
			break;
			}
		case 1123:
			{
			Point1123();
			break;
			}
		case 1132:
			{
			Point1132();
			break;
			}
		case 1133:
			{
			Point1133();
			break;
			}
		case 1151:
			{
			Point1151();
			break;
			}
		case 1152:
			{
			Point1152();
			break;
			}
		case 1153:
			{
			Point1153();
			break;
			}
		case 1154:
			{
			Point1154();
			break;
			}
		case 1155:
			{
			Point1155();
			break;
			}
		case 1156:
			{
			Point1156();
			break;
			}
		case 1157:
			{
			Point1157();
			break;
			}
		case 1:
			{
				double* data = new double[10];
				for(int i = 0; i < 10; i++)
				{
					std::cout << "\ndata[" << i << "]: ";
					data[i] = GetElementConsoleDouble();
				}
				Invert(data);
				for (int i = 0; i < 10; i++)
				{
					std::cout << data[i] << " ";
				}
				delete[] data;
				break;
			}
		default:
			{
			std::cout << "error input\n";
			break;
			}
		}	
	}
}


int GetElementConsoleMain()
{
	int taxableIncome;
	for (;;) 
	{
		if (std::cin >> taxableIncome)
		{
			return taxableIncome;
		}
		std::cin.clear();
		std::cin.ignore(80, '\n');
	}
}


void Invert(double* data)
{
	for(int i = 0; i < 10; i++)
	{
		data[i] *= -1;
	}
}


double GetElementConsoleDouble()
{
	double taxableIncome;
	for (;;) 
	{
		if (std::cin >> taxableIncome)
		{
			return taxableIncome;
		}
		std::cin.clear();
		std::cin.ignore(80, '\n');
	}
}