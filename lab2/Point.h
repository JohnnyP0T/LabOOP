#pragma once
<<<<<<< Updated upstream
=======
#include "Genre.h"

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


/// @brief Структура фильм.
struct MovieWithGenre
{
	/// @brief Название.
	std::string Name;
	/// @brief Продолжительность.	
	int Duration;
	/// @brief Год.
	int Year;
	/// @brief Жанр.
	Genre Genre;
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

/// @brief Демонстрирует работу сортировки.
>>>>>>> Stashed changes
void DemoSort();
void DemoRectangle();
void DemoFlight();
void DemoMovie();
void DemoTime();