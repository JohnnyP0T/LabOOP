#include <iostream>

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


int GetElementConsoleInt()
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