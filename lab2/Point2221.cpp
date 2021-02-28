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
	/// @brief ����� ������ � �������.
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
	std::cout << "DemoRectangle\n";
	std::cout << "0 - ��� ������������� � ������ ������� 2.2.3.3.\n";
	std::cout << "1 - ��� ����� ����� ��������� 2.2.3.2\n";
	std::cout << "2 - �����\n";
	
	while(true)
	{
		const int choice = GetElementConsoleInt();
		
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
			std::cout << "Length(������������� �����): \n";
			rectangle.Length = GetElementConsoleDouble();
			if (rectangle.Length < 0)
			{
				rectangle.Length *= -1;
			}
			std::cout << "Width(������������� �����): \n";
			rectangle.Width = GetElementConsoleDouble();
			if (rectangle.Width < 0)
			{
				rectangle.Width *= -1;
			}
			
			std::cout
				<< "Length "
				<< rectangle.Length
				<< " Width "
				<< rectangle.Width
				<< " Color "
				<< rectangle.Color
				<< " The rectangle: "
				<< rectangle.Length << "*" << rectangle.Width
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
	std::cout << "DemoFlight\n";
	std::cout << "0 - ��� ������������� � ������ ������� 2.2.3.3.\n";
	std::cout << "1 - ��� ����� ����� ��������� 2.2.3.2\n";
	std::cout << "2 - �����\n";
	
	while(true)
	{
		const int choice = GetElementConsoleInt();
		if(choice == 0)
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
					<< item.FlightTime << " minutes"
					<< std::endl;
			}
			
			system("pause");
			return;
		}

		if(choice == 1)
		{
			Flight flight;

			std::cout << "DeparturePoint: \n";
			std::cin.get();
			std::getline(std::cin, flight.DeparturePoint);
			std::cout << "Destination: \n";
			std::getline(std::cin, flight.Destination);
			std::cout << "FlightTime(minutes): \n";
			flight.FlightTime = GetElementConsoleInt();
			
			std::cout
				<< "DeparturePoint "
				<< flight.DeparturePoint
				<< " Destination "
				<< flight.Destination
				<< " FlightTime "
				<< flight.FlightTime << " minutes"
				<< std::endl;
			
			system("pause");
			return;
		}
		
		if (choice == 2)
		{
			return;
		}

		std::cout << "0 ��� 1\n";
	}
}

void DemoMovie()
{
	std::cout << "DemoMovie\n";
	std::cout << "0 - ��� ������������� � ������ ������� 2.2.3.3.\n";
	std::cout << "1 - ��� ����� ����� ��������� 2.2.3.2\n";
	std::cout << "2 - �����\n";
	
	while (true)
	{
		const int choice = GetElementConsoleInt();

		if (choice == 0)
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

			system("pause");
			return;
		}

		if (choice == 1)
		{
			Movie movie;

			std::cout << "Name: \n";
			std::cin.get();
			std::getline(std::cin, movie.Name);
			std::cout << "Rating: \n";
			movie.Rating = GetElementConsoleInt();
			std::cout << "Duration: \n";
			movie.Duration = GetElementConsoleInt();
			std::cout << "Year: \n";
			movie.Year = GetElementConsoleInt();
			std::cin.get();
			std::cout << "Genre: \n";
			std::cin.get();
			std::getline(std::cin, movie.Genre);

			std::cout
				<< "Name "
				<< movie.Name
				<< " Rating "
				<< movie.Rating
				<< " Duration "
				<< movie.Duration
				<< " Year "
				<< movie.Year
				<< " Genre "
				<< movie.Genre
				<< std::endl;

			system("pause");
			return;
		}

		if (choice == 2)
		{
			return;
		}

		std::cout << "0 ��� 1\n";
	}
}

void DemoTime()
{
	std::cout << "DemoTime\n";
	std::cout << "0 - ��� ������������� � ������ ������� 2.2.3.3.\n";
	std::cout << "1 - ��� ����� ����� ��������� 2.2.3.2\n";
	std::cout << "2 - �����\n";
	
	while(true)
	{
		const int choice = GetElementConsoleInt();

		if(choice == 0)
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
			
			system("pause");
			return;
		}

		if (choice == 1)
		{
			Time time;

			std::cout << "Seconds(�� 0 �� 60) (���� ���� ����� ������ �� ����������): \n";
			time.Seconds = GetElementConsoleInt();
			if(time.Seconds > 60)
			{
				time.Seconds = 60;
			}
			else if(time.Seconds < 0)
			{
				time.Seconds = 0;
			}
			
			std::cout << "Minutes(�� 0 �� 60) (���� ���� ����� ������ �� ����������): \n";
			time.Minutes = GetElementConsoleInt();
			if (time.Minutes > 60)
			{
				time.Minutes = 60;
			}
			else if (time.Minutes < 0)
			{
				time.Minutes = 0;
			}
			
			std::cout << "Hours(�� 0 �� 23) (���� ���� ����� ������ �� ����������): \n";
			time.Hours = GetElementConsoleInt();
			if (time.Hours > 23)
			{
				time.Hours = 23;
			}
			else if (time.Hours < 0)
			{
				time.Hours = 0;
			}
			
			std::cout
				<< "Seconds "
				<< time.Seconds
				<< " Minutes "
				<< time.Minutes
				<< " Hours "
				<< time.Hours
				<< std::endl;

			system("pause");
			return;
		}
		
		if (choice == 2)
		{
			return;
		}

		std::cout << "0 ��� 1\n";
	}
}