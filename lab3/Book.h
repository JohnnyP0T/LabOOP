#pragma once

#include <string>

/// @brief Книга.
struct Book
{
	/// @brief Название книги.
	std::string BookName;
	/// @brief Год издания.
	int Year;
	/// @brief Количество страниц.
	int NumberPages;
	/// @brief Авторы.
	std::string* Authors;
	/// @brief Количество авторов.
	int NumberAuthors;
};

/// @brief 3.2.2 Работа с полями-массивами.
void DemoBook();

/// @brief Чтение с консоли полей структуры Книга.
/// @param book Объект структуры Книга.
void ReadBookFromConsole(Book& book);

/// @brief Вывод на консоль полей структуры Книга.
/// @param book Объект структуры Книга.
void WriteBookToConsole(Book& book);

/// @brief Поиск книги по автору.
/// @param books Массив книг.
/// @param booksCount Количество книг.
/// @param author Автор для поиска.
/// @return Индекс.
int FindBookByAuthor(Book* books, int booksCount, std::string& author);
