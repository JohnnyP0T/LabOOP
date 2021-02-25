#include <iostream>
#include <array>


int GetElementConsole()
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


void Point1151()
{
	double* data = new double[10];
	for(int i = 0; i < 10; i++)
	{
		data[i] = static_cast<double>(i)/2;
	}
	std::cout << "Array of double: \n";
	for (int i = 0; i < 10; i++)
	{
		std::cout << data[i] << " ";
	}
	delete[] data;
}


void Point1152()
{
	bool* data = new bool[10];
	for (int i = 0; i < 10; i++)
	{
		data[i] = i % 2 == 0;
	}
	std::cout << "Array of bool: \n";
	for (int i = 0; i < 10; i++)
	{
		if (data[i])
			std::cout << "true ";
		else
			std::cout << "false ";
	}
	delete[] data;
}


void Point1153()
{
	char* data;
	std::cout << "Enter char array size: ";
	int n = GetElementConsole();
	data = new char[n];
	for (int i = 0; i < n; i++)
	{
		std::cout << "\ndata[" << i << "]: ";
		std::cin >> data[i];
	}
	std::cout << "Your char array is: \n";
	for (int i = 0; i < n; i++)
	{
		std::cout << data[i] << ' ';
	}
	delete[] data;
}


void BubbleSort(double*& data)
{
	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			if (data[j - 1] > data[j])
			{
				const int tmp = data[j - 1];
				data[j - 1] = data[j];
				data[j] = tmp;
			}
		}
	}
}


void Point1154()
{
	double* data = new double[10];
	
	for (int i = 0; i < 10; i++)
	{
		data[i] = static_cast<double>(i) + 0.5;
	}
	
	std::cout << "Array of double: \n";
	for (int i = 0; i < 10; i++)
	{
		std::cout << data[i] << " ";
	}
	
	BubbleSort(data);
	
	std::cout << "\nSorted array of double: \n";
	for (int i = 0; i < 10; i++)
	{
		std::cout << data[i] << ' ';
	}
	
	delete[] data;
}


void Point1155()
{
	int* data = new int[10];

	for (int i = 0; i < 10; i++)
	{
		data[i] = rand() % 100;
	}

	std::cout << "Int array: \n";
	for (int i = 0; i < 10; i++)
	{
		std::cout << data[i] << " ";
	}

	std::cout << "\nEnter searching value: ";
	const int searchingValue = GetElementConsole();

	for (int i = 0; i < 10; i++)
	{
		if(data[i] == searchingValue)
		{
			std::cout << "Index of searching value " << i << " is: " << data[i];
			break;
		}
	}

	delete[] data;
}


void Point1156()
{
	char* data = new char[15];

	for (int i = 0; i < 15; i++)
	{
		data[i] = rand() % 100;
	}

	std::cout << "Char array is: \n";
	for (int i = 0; i < 15; i++)
	{
		std::cout << data[i] << " ";
	}

	int count = 0;
	std::cout << "\nAll letters in your array:\n";
	for (int i = 0; i < 15; i++)
	{
		if (isalpha(data[i]))
		{
			std::cout << data[i] << " ";
			count++;
		}
	}
	std::cout << "\nCount = " << count;
	delete[] data;
}


int* MakeRandomArray(const int arraySize)
{
	int* data = new int[arraySize];
	for(int i = 0; i < arraySize; i++)
	{
		data[i] = rand() % 100;
	}

	std::cout << "\nArray ";
	for(int i = 0; i < arraySize; i++)
	{
		std::cout << data[i] << " ";
	}
	std::cout << std::endl;
	return data;
}


void Point1157()
{
	int* data = MakeRandomArray(5);
	delete[] data;
	int* data2 = MakeRandomArray(8);
	delete[] data2;
	int* data3 = MakeRandomArray(13);
}