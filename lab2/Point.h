#pragma once
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
void DemoSort();

/// @brief Инициализация структуры и ее полей.
void DemoRectangle();

/// @brief Инициализация структуры и ее полей.
void DemoFlight();

/// @brief Инициализация структуры и ее полей.
void DemoMovie();

/// @brief Инициализация структуры и ее полей.
void DemoTime();

/// @brief Попытка присвоения других типов указателям 2.2.4.4 (не обязательно добавлять в меню)
void WrongPointers();

/// @brief Вывод размеров структуры.(не обязательно добавлять в меню)
/// @param rectangle структура.
void WriteRectangle(Rectangle& rectangle);

/// @brief Ввод размеров структуры.(не обязательно добавлять в меню)
/// @param rectangle структура
void ReadRectangle(Rectangle& rectangle);

/// @brief Ввод и вывод структуры 2.2.5.3
void DemoReadAndWriteRectangles();

/// @brief Работа с динамической паматью 2.2.6.1
void DemoDynamicFlight();

/// @brief Работа с динамической паматью(массив структур) 2.2.6.2
void DemoDynamicFlights();

/// @brief Перечисления в структурах.
void DemoMovieWithGenre();
