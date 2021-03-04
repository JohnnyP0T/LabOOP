#include <iostream>
#include <array>


constexpr int sizePoint115 = 10;
constexpr int sizePoint1156 = 15;


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


void WriteArray(double* data , int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << data[i] << " ";
	}
}


void Point1151()
{
	double* data = new double[sizePoint115];
	for (int i = 0; i < sizePoint115; i++)
	{
		data[i] = static_cast<double>(i) / 2;
	}
	std::cout << "Array of double: \n";
	WriteArray(data, sizePoint115);
	delete[] data;
}


void Point1152()
{
	bool* data = new bool[sizePoint115];
	for (int i = 0; i < sizePoint115; i++)
	{
		data[i] = i % 2 == 0;
	}
	std::cout << "Array of bool: \n";
	for (int i = 0; i < sizePoint115; i++)
	{
		std::cout << (data[i] ? "true " : "false ");
		/*
		if (data[i])
			std::cout << "true ";
		else
			std::cout << "false ";*/
	}
	delete[] data;
}


void WriteArray(char* data, int n)
{
	for (int i = 0; i < n; i++)
	{
		std::cout << data[i] << ' ';
	}
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
	WriteArray(data, n);
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
	double* data = new double[sizePoint115];
	
	for (int i = 0; i < sizePoint115; i++)
	{
		data[i] = static_cast<double>(i) + 0.5;
	}
	
	std::cout << "Array of double: \n";
	WriteArray(data, sizePoint115);
	
	BubbleSort(data);
	
	std::cout << "\nSorted array of double: \n";
	WriteArray(data, sizePoint115);
	
	delete[] data;
}


void WriteArray(int* data, int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << data[i] << " ";
	}
}


void Point1155()
{
	int* data = new int[sizePoint115];

	for (int i = 0; i < sizePoint115; i++)
	{
		data[i] = rand() % 100;
	}

	std::cout << "Int array: \n";
	WriteArray(data, sizePoint115);

	std::cout << "\nEnter searching value: ";
	const int searchingValue = GetElementConsole();

	for (int i = 0; i < sizePoint115; i++)
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
	char* data = new char[sizePoint1156];

	for (int i = 0; i < sizePoint1156; i++)
	{
		data[i] = rand() % 100;
	}

	std::cout << "Char array is: \n";
	WriteArray(data, sizePoint1156);

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
	WriteArray(data, arraySize);
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
	delete[] data3;
}