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

//TODO: Можно объединить с помощью template<typename T>. Почитай о нем...
//TODO: И можно перенести в отдельный файл, чтобы дубли не встречались в других файлах
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
	std::array<int, sizePoint1121> data;
	for(int i = 0; i < sizePoint1121; i++)
	{
		data[i] = rand() % 10;
	}

	std::cout << "Source array is: ";

	WriteArray(data);
	
	std::cout << "\nSorted array is: ";

	//TODO: Нужно реализовать свою сортировку массива
	//делал в других заданиях/ специально использовал std::array что бы попробовать воспользоваться этой сортировкой
	//TODO: В задании написано реализовать сортировку, вот я и написал об этом
	std::sort(data.begin(), data.end());
	WriteArray(data);
}


void Point1122()
{
	std::array<double, sizePoint1122> data;
	for (int i = 0; i < sizePoint1122; i++)
	{
		data[i] = static_cast<double>(rand()) / RAND_MAX * 100;
	}
	
	std::cout << "Source array is: ";

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
	std::array<char, sizePoint1123> data;
	for (int i = 0; i < sizePoint1123; i++)
	{
		std::cout << "\ndata[" << i << "]: ";
		std::cin >> data[i];
	}

	std::cout << "\nYour array is: ";

	WriteArray(data);

	std::cout << "\nAll letters in your array:\n";
	for (auto var : data)
	{
		if(static_cast<int>(var) >= 97 && static_cast<int>(var) <=122)
			std::cout << var << " ";
	}
}