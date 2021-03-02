#include <algorithm>
#include <iostream>
#include <array>


constexpr int sizePoint1121 = 10;
constexpr int sizePoint1122 = 12;
constexpr int sizePoint1123 = 8;


double GetElementConsole()
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


void WriteArray(std::array<int, sizePoint1121> data)
{
	for (auto var : data)
	{
		std::cout << var << " ";
	}
}


void WriteArray(std::array<double, sizePoint1122> data)
{
	for (auto var : data)
	{
		std::cout << var << " ";
	}
}


void WriteArray(std::array<char, sizePoint1123> data)
{
	for (auto var : data)
	{
		std::cout << var << " ";
	}
}


void Point1121()
{
	//TODO: А если я попрошу количество элементов не 10, а 999999999999999? Может проще создать константу?
	std::array<int, sizePoint1121> data;
	for(int i = 0; i < sizePoint1121; i++)
	{
		data[i] = rand() % 10;
	}

	std::cout << "Source array is: ";

	//TODO: Дубль
	WriteArray(data);
	
	std::cout << "\nSorted array is: ";

	//TODO: Нужно реализовать свою сортировку массива
	//делал в других заданиях/ специально использовал std::array что бы попробовать воспользоваться этой сортировкой
	std::sort(data.begin(), data.end());
	//TODO: Дубль
	WriteArray(data);
}


void Point1122()
{
	//TODO: А если я попрошу количество элементов не 12, а 999999999999999? Может проще создать константу?
	std::array<double, sizePoint1122> data;
	for (int i = 0; i < sizePoint1122; i++)
	{
		data[i] = static_cast<double>(rand()) / RAND_MAX * 100;
	}
	
	std::cout << "Source array is: ";

	//TODO: Дубль
	WriteArray(data);

	std::cout << "\nEnter searching value: ";
	const double searchingValue = GetElementConsole();
	
	int count = 0;
	for (auto var : data)
	{
		if(var >= searchingValue)
		{
			count++;
		}
	}
	std::cout << "\nElements of array more than " << searchingValue << " is: " << count;
}


void Point1123()
{
	std::cout << "Enter array of 8 chars \n";
	//TODO: А если я попрошу количество элементов не 8, а 999999999999999? Может проще создать константу?
	std::array<char, sizePoint1123> data;
	for (int i = 0; i < sizePoint1123; i++)
	{
		std::cout << "\ndata[" << i << "]: ";
		std::cin >> data[i];
	}

	std::cout << "\nYour array is: ";

	//TODO: Дубль
	WriteArray(data);

	std::cout << "\nAll letters in your array:\n";
	for (auto var : data)
	{
		if(static_cast<int>(var) >= 97 && static_cast<int>(var) <=122)
			std::cout << var << " ";
	}
}