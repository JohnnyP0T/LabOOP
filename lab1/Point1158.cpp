#include <iostream>

using namespace std;


int* ReadArray(const int count)
{
	int* values = new int[count];
	for (int i = 0; i < count; i++)
	{
		cin >> values[i];
	}
	return values;
}


int CountPositiveValues(int* values, const int count)
{
	int result = 0;
	for (int i = 0; i < count; i++)
	{
		if (values[i] > 0)
		{
			result++;
		}
	}
	return result;
}


void Point1158()
{
	int count = 15;
	int* values = ReadArray(count); //утечка
	cout << "Count is: " << CountPositiveValues(values, count) << endl;

	//TODO: не думаю, что правильно. Подумай. В чем отличие delete от delete[]?
	//исправление
	/*
	 * int*removable = values;
	 * delete removable;
	 */
	
	count = 20;
	values = ReadArray(count);
	cout << "Count is: " << CountPositiveValues(values, count) << endl;

	delete[] values;
}