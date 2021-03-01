#include <algorithm>
#include <iostream>
#include <array>


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


void Point1121()
{
	//TODO: � ���� � ������� ���������� ��������� �� 10, � 999999999999999? ����� ����� ������� ���������?
	std::array<int, 10> data;
	for(int i = 0; i < 10; i++)
	{
		data[i] = rand() % 10;
	}

	std::cout << "Source array is: ";

	//TODO: �����
	for (auto var : data)
	{
		std::cout << var << " ";
	}
	
	std::cout << "\nSorted array is: ";

	//TODO: ����� ����������� ���� ���������� �������
	std::sort(data.begin(), data.end());
	//TODO: �����
	for(auto var : data)
	{
		std::cout << var << " ";
	}
}


void Point1122()
{
	//TODO: � ���� � ������� ���������� ��������� �� 12, � 999999999999999? ����� ����� ������� ���������?
	std::array<double, 12> data;
	for (int i = 0; i < 12; i++)
	{
		data[i] = static_cast<double>(rand()) / RAND_MAX * 100;
	}
	
	std::cout << "Source array is: ";

	//TODO: �����
	for (auto var : data)
	{
		std::cout << var << " ";
	}

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
	//TODO: � ���� � ������� ���������� ��������� �� 8, � 999999999999999? ����� ����� ������� ���������?
	std::array<char, 8> data;
	for (int i = 0; i < 8; i++)
	{
		std::cout << "\ndata[" << i << "]: ";
		std::cin >> data[i];
	}

	std::cout << "\nYour array is: ";

	//TODO: �����
	for (auto var : data)
	{
		std::cout << var << " ";
	}

	std::cout << "\nAll letters in your array:\n";
	for (auto var : data)
	{
		if(static_cast<int>(var) >= 97 && static_cast<int>(var) <=122)
			std::cout << var << " ";
	}
}