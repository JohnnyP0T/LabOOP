#pragma once

#include <string>

/// @brief �����.
struct Book
{
	/// @brief �������� �����.
	std::string BookName;
	/// @brief ��� �������.
	int Year;
	/// @brief ���������� �������.
	int NumberPages;
	/// @brief ������.
	std::string* Authors;
	/// @brief ���������� �������.
	int NumberAuthors;
};

/// @brief 3.2.2 ������ � ������-���������.
void DemoBook();

/// @brief ������ � ������� ����� ��������� �����.
/// @param book ������ ��������� �����.
void ReadBookFromConsole(Book& book);

/// @brief ����� �� ������� ����� ��������� �����.
/// @param book ������ ��������� �����.
void WriteBookToConsole(Book& book);

/// @brief ����� ����� �� ������.
/// @param books ������ ����.
/// @param booksCount ���������� ����.
/// @param author ����� ��� ������.
/// @return ������.
int FindBookByAuthor(Book* books, int booksCount, std::string& author);
