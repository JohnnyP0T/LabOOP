#include <iostream>
#include <string>
#include "Point.h"

struct Rectangle
{
	double Length;
	double Width;
	std::string Color;
};

struct Flight
{
	std::string DeparturePoint;
	std::string Destination;
	int FlightTime;
};

struct Movie
{
	std::string Name;
	int Duration;
	int Year;
	std::string Genre;
	double Rating;
};

struct Time
{
	int Hours;
	int Minutes;
	int Seconds;
};


//2.2.2.2
struct Contact
{
	std::string Name;
	std::string PhoneNumber;
};

struct Song
{
	std::string NameAuthor;
	std::string NameSong;
	int Duration;
};

struct Discipline
{
	std::string Name;
	std::string NameTeacher;
	int Rating;
};
//2.2.2.2


void DemoRectangle()
{
	Rectangle rectangle[3]
	{
		{1,1,"red"},
		{2,2, "blue"},
		{3,1,"white"}
	};
	for (auto &item : rectangle)
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