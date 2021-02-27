#include <iostream>
#include <string>

#include "Point.h"

#include "IOMenu.h"

/// @brief ��������� �������������.
struct Rectangle
{
	/// @brief �����.
	double Length;
	/// @brief ������.
	double Width;
	/// @brief ����.
	std::string Color;
};

/// @brief ��������� ����.
struct Flight
{
	/// @brief ����� ������.
	std::string DeparturePoint;
	/// @brief ����� ����������.
	std::string Destination;
	/// @brief ����� ������.
	int FlightTime;
};

/// @brief ��������� �����.
struct Movie
{
	/// @brief ��������.
	std::string Name;
	/// @brief �����������������.	
	int Duration;
	/// @brief ���.
	int Year;
	/// @brief ����.
	std::string Genre;
	/// @brief �������.
	double Rating;
};

/// @brief ��������� �����.
struct Time
{
	/// @brief ����.
	int Hours;
	/// @brief ������.
	int Minutes;
	/// @brief �������.
	int Seconds;
};


//2.2.2.2
/// @brief ������� � ���������� ������.
struct Contact
{
	/// @brief ���.
	std::string Name;
	/// @brief �����.
	std::string PhoneNumber;
};

/// @brief �����
struct Song
{
	/// @brief �����.
	std::string NameAuthor;
	/// @brief ��������.
	std::string NameSong;
	/// @brief �����������������.
	int Duration;
};

/// @brief ���������� � �������.
struct Discipline
{
	/// @brief ��������.
	std::string Name;
	/// @brief ��� �������������.
	std::string NameTeacher;
	/// @brief ������.
	int Rating;
};
//2.2.2.2

void DemoRectangle()
{
	std::cout << "0 - ��� ������������� � ������ ������� 2.2.3.3.\n";
	std::cout << "1 - ��� ����� ����� ��������� 2.2.3.2\n";
	std::cout << "2 - �����\n";
	while(true)
	{
		int choice = GetElementConsoleInt();
		if(choice == 0)
		{
			Rectangle rectangle[3]
			{
				{1,1,"red"},
				{2,2, "blue"},
				{3,1,"white"}
			};
			for (auto& item : rectangle)
			{
				std::cout
					<< "Length "
					<< item.Length
					<< " Width "
					<< item.Width
					<< " Color "
					<< item.Color
					<< std::endl;
			}
			system("pause");
			return;
		}
		if(choice == 1)
		{
			Rectangle rectangle;

			std::cout << "Color: \n";
			std::cin.get();
			std::getline(std::cin, rectangle.Color);
			std::cout << "Length: \n";
			rectangle.Length = GetElementConsoleDouble();
			std::cout << "Width: \n";
			rectangle.Width = GetElementConsoleDouble();
			std::cout
				<< "Length "
				<< rectangle.Length
				<< " Width "
				<< rectangle.Width
				<< " Color "
				<< rectangle.Color
				<< std::endl;
			system("pause");
			return;
		}
		if(choice == 2)
		{
			return;
		}
		std::cout << "0 ��� 1\n";
	}
}

void DemoFlight()
{
	Flight flight[3]
	{
		{"rus","us", 20},
		{"us", "rus", 20},
		{"", "", 0}
	};
	for (auto& item : flight)
	{
		std::cout
			<< "DeparturePoint "
			<< item.DeparturePoint
			<< " Destination "
			<< item.Destination
			<< " FlightTime "
			<< item.FlightTime
			<< std::endl;
	}
}

void DemoMovie()
{
	Movie movie[3]
	{
		{ "film", 2, 2000, "comedy", 9.5 },
		{"f",1,1999,"genre", 3},
		{"", 0, 0, "", 0}
	};
	for (auto& item : movie)
	{
		std::cout
			<< "Name "
			<< item.Name
			<< " Rating "
			<< item.Rating
			<< " Duration "
			<< item.Duration
			<< " Year "
			<< item.Year
			<< " Genre "
			<< item.Genre
			<< std::endl;
	}
}

void DemoTime()
{
	Time time[3]
	{
		{1,1,1},
		{2,2,2},
		{3,3,3}
	};
	for (auto& item : time)
	{
		std::cout
			<< "Hours "
			<< item.Hours
			<< " Minutes "
			<< item.Minutes
			<< " Seconds "
			<< item.Seconds
			<< std::endl;
	}
}