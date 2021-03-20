#pragma warning(disable : 4996) //_CRT_SECURE_NO_WARNINGS Ошибка localtime.

#include <iostream>
#include <time.h>

#include "Book.h"
#include "IO.h"

void DemoBook()
{
	const int COUNT = 2;
	Book books[COUNT];
	for (int i = 0; i < COUNT; i++)
	{
		ReadBookFromConsole(books[i]);
	}
	std::cout << "Введите автора для поиска книги: " << std::endl;
	std::string author;
	std::getline(std::cin, author);
	
	int foundIndex = FindBookByAuthor(books, COUNT, author);
	if (foundIndex < 0)
	{
		std::cout << "Не найдено";
	}
	else
	{
		WriteBookToConsole(books[foundIndex]);
	}

	for (int i = 0; i < COUNT; i++)
	{
		delete[] books[i].Authors;
	}
}


void ReadBookFromConsole(Book& book)
{
	std::cout << "Введите название книги: ";
	std::getline(std::cin, book.BookName);
	std::cout << std::endl;

	while (true)
	{
		std::cout << "Введите год издания: ";
		book.Year = GetElementConsoleInt();
		std::cout << std::endl;

		time_t t;
		struct tm* calendarTime;

		time(&t);

		calendarTime = localtime(&t);

		int firstYear = 1900;

		if(book.Year < 0 || book.Year > calendarTime->tm_year + firstYear)
		{
			std::cout << "Некорректный год, попробуйте еще\n";
		}
		else
		{
			break;
		}
	}

	std::cout << "Введите количество страниц: ";
	book.NumberPages = ReadPositiveNumber();
	std::cout << std::endl;

	while (true)
	{
		std::cout << "Введите количество авторов: ";
		book.NumberAuthors = ReadPositiveNumber();
		std::cout << std::endl;
		if(book.NumberAuthors < 1 || book.NumberAuthors > 10)
		{
			std::cout << "Количество авторов должно быть в диапазоне 1-10. Повторите ввод \n";
		}
		else
		{
			break;
		}
	}

	book.Authors = new std::string[book.NumberAuthors];
	for(int i = 0; i < book.NumberAuthors; i++)
	{
		std::cout << "Введите автора №" << i << ": ";
		std::getline(std::cin, book.Authors[i]);
		std::cout << std::endl;
	}
}


void WriteBookToConsole(Book& book)
{
	for (int i = 0; i < book.NumberAuthors - 1; i++)
	{
		std::cout << book.Authors[i] << ", ";
	}
	std::cout << book.Authors[book.NumberAuthors - 1];
	std::string& lastAuthor = book.Authors[book.NumberAuthors - 1];
	int countSymbol = lastAuthor.length();
	if (lastAuthor[countSymbol - 1] != '.')
	{
		std::cout << '.';
	}
	std::cout << ' ' << book.Year << ". - " << book.NumberPages
		<< "p." << std::endl;
}


int FindBookByAuthor(Book* books, int booksCount, std::string& author)
{
	for (int i = 0; i < booksCount; i++)
	{
		for (int j = 0; j < books[i].NumberAuthors; j++)
		{
			if (books[i].Authors[j] == author)
			{
				return i;
			}
		}
	}
	return -1;
}