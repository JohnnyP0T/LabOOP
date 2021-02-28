#include <iostream>
#include <string>

#include "Point.h"

#include "IOMenu.h"

/// @brief Структура прямоугольник.
struct Rectangle
{
	/// @brief Длина.
	double Length;
	/// @brief Ширина.
	double Width;
	/// @brief Цвет.
	std::string Color;
};

/// @brief Структура рейс.
struct Flight
{
	/// @brief Пункт вылета.
	std::string DeparturePoint;
	/// @brief Пункт назначения.
	std::string Destination;
	/// @brief Время полета в минутах.
	int FlightTime;
};

/// @brief Структура фильм.
struct Movie
{
	/// @brief Название.
	std::string Name;
	/// @brief Продолжительность.	
	int Duration;
	/// @brief Год.
	int Year;
	/// @brief Жанр.
	std::string Genre;
	/// @brief Рейтинг.
	double Rating;
};

/// @brief Структура время.
struct Time
{
	/// @brief Часы.
	int Hours;
	/// @brief Минуты.
	int Minutes;
	/// @brief Секунды.
	int Seconds;
};


//2.2.2.2
/// @brief Контакт в телефонной книжке.
struct Contact
{
	/// @brief Имя.
	std::string Name;
	/// @brief Номер.
	std::string PhoneNumber;
};

/// @brief Песня
struct Song
{
	/// @brief Автор.
	std::string NameAuthor;
	/// @brief Название.
	std::string NameSong;
	/// @brief Продолжительность.
	int Duration;
};

/// @brief Дисциплина в зачетке.
struct Discipline
{
	/// @brief Название.
	std::string Name;
	/// @brief Имя преподавателя.
	std::string NameTeacher;
	/// @brief Оценка.
	int Rating;
};
//2.2.2.2

void DemoRectangle()
{
	std::cout << "DemoRectangle\n";
	std::cout << "0 - для инициализации и вывода массива 2.2.3.3.\n";
	std::cout << "1 - для ввода полей структуры 2.2.3.2\n";
	std::cout << "2 - выход\n";
	
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
			std::cout << "Length(положительное число): \n";
			rectangle.Length = GetElementConsoleDouble();
			if (rectangle.Length < 0)
			{
				rectangle.Length *= -1;
			}
			std::cout << "Width(положительное число): \n";
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
		
		std::cout << "0 или 1\n";
	}
}

void DemoFlight()
{
	std::cout << "DemoFlight\n";
	std::cout << "0 - для инициализации и вывода массива 2.2.3.3.\n";
	std::cout << "1 - для ввода полей структуры 2.2.3.2\n";
	std::cout << "2 - выход\n";
	
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

		std::cout << "0 или 1\n";
	}
}

void DemoMovie()
{
	std::cout << "DemoMovie\n";
	std::cout << "0 - для инициализации и вывода массива 2.2.3.3.\n";
	std::cout << "1 - для ввода полей структуры 2.2.3.2\n";
	std::cout << "2 - выход\n";
	
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

		std::cout << "0 или 1\n";
	}
}

void DemoTime()
{
	std::cout << "DemoTime\n";
	std::cout << "0 - для инициализации и вывода массива 2.2.3.3.\n";
	std::cout << "1 - для ввода полей структуры 2.2.3.2\n";
	std::cout << "2 - выход\n";
	
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

			std::cout << "Seconds(от 0 до 60) (если ввод будет больше то округление): \n";
			time.Seconds = GetElementConsoleInt();
			if(time.Seconds > 60)
			{
				time.Seconds = 60;
			}
			else if(time.Seconds < 0)
			{
				time.Seconds = 0;
			}
			
			std::cout << "Minutes(от 0 до 60) (если ввод будет больше то округление): \n";
			time.Minutes = GetElementConsoleInt();
			if (time.Minutes > 60)
			{
				time.Minutes = 60;
			}
			else if (time.Minutes < 0)
			{
				time.Minutes = 0;
			}
			
			std::cout << "Hours(от 0 до 23) (если ввод будет больше то округление): \n";
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

		std::cout << "0 или 1\n";
	}
}