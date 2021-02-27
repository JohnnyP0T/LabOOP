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
	/// @brief Время полета.
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
	std::cout << "0 - для инициализации и вывода массива 2.2.3.3.\n";
	std::cout << "1 - для ввода полей структуры 2.2.3.2\n";
	std::cout << "2 - выход\n";
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
		std::cout << "0 или 1\n";
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