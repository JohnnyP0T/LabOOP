#include <iostream>

#include "DemoFunction.h"
#include "Song.h"
#include "Album.h"
#include "Band.h"
#include "Flight.h"
#include "Time.h"
#include "Point.h"
#include "Rectangle.h"


constexpr int COUNT = 5;


void DemoBand()
{
	const int songCount = 4;
	const int albumsCount = 3;

	Song** songs1 = new Song * [songCount];
	std::string nameSong1 = "first";
	std::string nameSong2 = "second";
	std::string nameSong3 = "third";
	std::string nameSong4 = "fourth";
	songs1[0] = new Song(nameSong1, 1, Rock);
	songs1[1] = new Song(nameSong2, 2, Pop);
	songs1[2] = new Song(nameSong3, 3, HipHop);
	songs1[3] = new Song(nameSong4, 4, Jazz);

	Song** songs2 = new Song * [songCount];
	nameSong1 = "One";
	nameSong2 = "Two";
	nameSong3 = "Three";
	nameSong4 = "Four";
	songs2[0] = new Song(nameSong1, 1, Jazz);
	songs2[1] = new Song(nameSong2, 2, Pop);
	songs2[2] = new Song(nameSong3, 3, HipHop);
	songs2[3] = new Song(nameSong4, 4, Jazz);

	Song** songs3 = new Song * [songCount];
	nameSong1 = "Song 1";
	nameSong2 = "Song 2";
	nameSong3 = "Song 3";
	nameSong4 = "Song 4";
	songs3[0] = new Song(nameSong1, 1, HipHop);
	songs3[1] = new Song(nameSong2, 2, HipHop);
	songs3[2] = new Song(nameSong3, 3, HipHop);
	songs3[3] = new Song(nameSong4, 4, HipHop);

	Album** albums = new Album * [albumsCount];
	std::string nameAlbum1 = "First Album";
	std::string nameAlbum2 = "Second Album";
	std::string nameAlbum3 = "Third Album";
	albums[0] = new Album(nameAlbum1, 1990, songCount, songs1);
	albums[1] = new Album(nameAlbum2, 1999, songCount, songs2);
	albums[2] = new Album(nameAlbum3, 2010, songCount, songs3);

	std::string nameBand = "Nirvana";
	std::string description = "kurt kob";
	Band* band = new Band(nameBand, description, albumsCount, albums);

	std::string foundSongName = "Song 1";
	Song* foundSong = band->FindSong(foundSongName);
	if (foundSong != nullptr)
	{
		std::cout << foundSong->WriteSong() << std::endl;
	}
	else
	{
		std::cout << "Не найдено" << std::endl;
	}

	Album* foundAlbum = band->FindAlbum(songs2[2]);
	if (foundAlbum != nullptr)
	{
		std::cout << "Название альбома: " << foundAlbum->GetAlbumTitle() << '\t'
			<< "Год выпуска: " << foundAlbum->GetIssueYear()
			<< '\t' << "Количество песен: " << foundAlbum->GetSongsCount()
			<< std::endl << std::endl;
	}
	else
	{
		std::cout << "Не найдено" << std::endl;
	}

	int allSongsCount;
	Song** allSongs = band->GetAllSongs(allSongsCount);
	for (int i = 0; i < allSongsCount; i++)
	{
		std::cout << allSongs[i]->WriteSong() << std::endl;
	}
	delete[] allSongs;
	std::cout << std::endl;

	int allSongsCountGenre;
	Song** allSongGenre = band->GetAllGenreSongs(HipHop, allSongsCountGenre);
	for (int i = 0; i < allSongsCountGenre; i++)
	{
		std::cout << allSongGenre[i]->WriteSong() << std::endl;
	}

	for (int i = 0; i < songCount; i++)
	{
		delete songs1[i];
		delete songs2[i];
		delete songs3[i];
	}

	for (int i = 0; i < albumsCount; i++)
	{
		delete albums[i];
	}

	delete[] allSongGenre;
	delete[] albums;
}


void DemoFlightWithTime()
{
	Flight* flights[COUNT];
	Time* departureTime1 = new Time(1, 2, 3, 1, 4);
	Time* purposeTime1 = new Time(1, 3, 2, 4, 3);
	std::string flightNumber = "34f";
	std::string from = "moskva";
	std::string purpose = "piter";
	flights[0] = new Flight(flightNumber, from, purpose, departureTime1,
		purposeTime1);

	flightNumber = "3tg";
	from = "ge";
	purpose = "3rfg";
	Time* departureTime2 = new Time(2021, 3, 22, 1, 22);
	Time* purposeTime2 = new Time(2021, 4, 23, 1, 22);
	flights[1] = new Flight(flightNumber, from, purpose, departureTime2,
		purposeTime2);

	flightNumber = "g3";
	from = "Kem";
	purpose = "Tomsk";
	Time* departureTime3 = new Time(2021, 3, 2, 9, 30);
	Time* purposeTime3 = new Time(2021, 3, 24, 12, 30);
	flights[2] = new Flight(flightNumber, from, purpose, departureTime3,
		purposeTime3);

	flightNumber = "gr3";
	from = "Novokuznezk";
	purpose = "Osinniki";
	Time* departureTime4 = new Time(2021, 10, 2, 4, 30);
	Time* purposeTime4 = new Time(2021, 10, 21, 12, 30);
	flights[3] = new Flight(flightNumber, from, purpose, departureTime4,
		purposeTime4);

	flightNumber = "ge";
	from = "US";
	purpose = "rus";
	Time* departureTime5 = new Time(2021, 6, 12, 3, 0);
	Time* purposeTime5 = new Time(2021, 6, 13, 4, 0);
	flights[4] = new Flight(flightNumber, from, purpose, departureTime5,
		purposeTime5);

	for (int i = 0; i < COUNT; i++)
	{
		std::cout << flights[i]->GetFlightNumber() << "\t" << flights[i]->GetFrom()
			<< '-' << flights[i]->GetPurpose() << "\t Вылет "
			<< flights[i]->GetDepartureTime()->GetMonth() << '.'
			<< flights[i]->GetDepartureTime()->GetDay() << '\t'
			<< flights[i]->GetDepartureTime()->GetHour() << ':'
			<< flights[i]->GetDepartureTime()->GetMinute()
			<< "\tПрибытие " << flights[i]->GetPurposeTime()->GetMonth()
			<< '.' << flights[i]->GetPurposeTime()->GetDay()
			<< '\t' << flights[i]->GetPurposeTime()->GetHour() << ':'
			<< flights[i]->GetPurposeTime()->GetMinute() << std::endl;
	}

	int timeDifference = flights[0]->GetFlightTimeMinutes();
	int minutesInHour = 60;
	std::cout << flights[0]->GetFlightNumber() << "\t" << flights[0]->GetFrom()
		<< '-' << flights[0]->GetPurpose() << "\tВремя полета: "
		<< timeDifference / minutesInHour << "h "
		<< timeDifference % minutesInHour << "min" << std::endl;

	delete departureTime1;
	delete departureTime2;
	delete departureTime3;
	delete departureTime4;
	delete departureTime5;

	delete purposeTime1;
	delete purposeTime2;
	delete purposeTime3;
	delete purposeTime4;
	delete purposeTime5;

	for (int i = 0; i < COUNT; i++)
	{
		delete flights[i];
	}
}


void DemoRectangleWithPoint()
{
	const int arrayCount = 5;
	Point* point = new Point[arrayCount]
	{
		Point(3,4),
		Point(4.3,3.7),
		Point(8,5),
		Point(13,5),
		Point(2.5, 9.54)
	};

	Rectangle* rectangle = new Rectangle[arrayCount]
	{
		Rectangle(&point[0], 5, 5),
		Rectangle(&point[1], 8, 34.45),
		Rectangle(&point[2], 10, 8.3),
		Rectangle(&point[3], 1, 2.865),
		Rectangle(&point[4], 2.5, 3),
	};

	double xCenter = 0;
	double yCenter = 0;
	for (int i = 0; i < arrayCount; i++)
	{
		xCenter += rectangle[i].GetCenter()->GetX();
		yCenter += rectangle[i].GetCenter()->GetY();
		std::cout << "X = " << rectangle[i].GetCenter()->GetX()
			<< " Y = " << rectangle[i].GetCenter()->GetY()
			<< " Length = " << rectangle[i].GetLength()
			<< " Width = " << rectangle[i].GetWidth() << std::endl;
	}

	std::cout << "XCenter = " << static_cast<double>(xCenter / arrayCount);
	std::cout << "YCenter = " << static_cast<double>(yCenter / arrayCount);
}

