#pragma once
#include "Genre.h"

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
struct MovieWithGenre
{
	/// @brief ��������.
	std::string Name;
	/// @brief �����������������.	
	int Duration;
	/// @brief ���.
	int Year;
	/// @brief ����.
	Genre Genre;
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

/// @brief ������������� ������ ����������.
void DemoSort();

/// @brief ������������� ��������� � �� �����.
void DemoRectangle();

/// @brief ������������� ��������� � �� �����.
void DemoFlight();

/// @brief ������������� ��������� � �� �����.
void DemoMovie();

/// @brief ������������� ��������� � �� �����.
void DemoTime();

/// @brief ������� ���������� ������ ����� ���������� 2.2.4.4 (�� ����������� ��������� � ����)
void WrongPointers();

/// @brief ����� �������� ���������.(�� ����������� ��������� � ����)
/// @param rectangle ���������.
void WriteRectangle(Rectangle& rectangle);

/// @brief ���� �������� ���������.(�� ����������� ��������� � ����)
/// @param rectangle ���������
void ReadRectangle(Rectangle& rectangle);

/// @brief ���� � ����� ��������� 2.2.5.3
void DemoReadAndWriteRectangles();

/// @brief ������ � ������������ ������� 2.2.6.1
void DemoDynamicFlight();

/// @brief ������ � ������������ �������(������ ��������) 2.2.6.2
void DemoDynamicFlights();

/// @brief ������������ � ����������.
void DemoMovieWithGenre();
