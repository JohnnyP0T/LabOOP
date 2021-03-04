#include <exception>
#include <iostream>

#include "Point.h"



// сортирует массив вещественных чисел
void Sort(double* values, int count)
{
	if (count < 0)
	{
		throw std::exception("count < 0");
	}
	double swap;
	for (int i = 0; i < count; i++)
	{
		for (int j = 0; j < count; j++)
		{
			if (values[i] < values[j])
			{
				swap = values[i];
				values[i] = values[j];
				values[j] = swap;
			}
		}
	}
}


// демонстрирует работу сортировки
void DemoSort()
{
	int count = 5;
	double* values = new double[count] {100.0, 249.0, 12.0, 45.0, 23.5};
	Sort(values, count);
	
	try
	{
		count = -1;
		Sort(values, count);
	}
	catch (std::exception& ex)
	{
		std::cout << "\nException caught ! " << ex.what();
	}
}
