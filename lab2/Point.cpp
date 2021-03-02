#include <iostream>
#include <string>

#include "Color.h"
#include "Genre.h"
#include "Point.h"
#include "IOMenu.h"
#include "Season.h"
#include "SmartphoneManufacturer.h"
#include "WeekDay.h"
#include "EducationForm.h"


void FindMaxRectangle(Rectangle* rectangles, int count)
{
	int maxRectangle = rectangles[0].Length * rectangles[0].Width;
	int index = 0;
	for (int i = 0; i < count; i++)
	{
		if (rectangles[i].Length * rectangles[i].Width > maxRectangle)
		{
			maxRectangle = rectangles[i].Length * rectangles[i].Width;
			index = i;
		}
	}

	std::cout << "Прямоугольник с максимальной площадью имеет размер: "
		<< rectangles[index].Length << "*" << rectangles[index].Width;
}


void FindRectangle(Rectangle* rectangles, int count)
{
	int maxLength = rectangles[0].Length;
	int index = 0;
	for(int i = 0; i < count; i++)
	{
		if(rectangles[i].Length > maxLength)
		{
			maxLength = rectangles[i].Length;
			index = i;
		}
	}

	std::cout << "Прямоугольник с максимальной длиной имеет размер: "
		<< rectangles[index].Length << "*" << rectangles[index].Width;
}


void Exchange(Rectangle& rectangle1, Rectangle& rectangle2)
{
	int width = 0;
	int length = 0;
	width = rectangle1.Width;
	length = rectangle1.Length;
	rectangle1.Width = rectangle2.Width;
	rectangle1.Length = rectangle2.Length;
	rectangle2.Width = width;
	rectangle2.Length = length;
}


void DemoRectangle()
{
	std::cout << "DemoRectangle\n";
	std::cout << "0 - для инициализации и вывода массива 2.2.3.3.\n";
	std::cout << "1 - для ввода полей структуры 2.2.3.2\n";
	std::cout << "2 - работа через указатель 2.2.4.1\n";
	std::cout << "3 - проверка функции Exchange 2.2.5.4\n";
	std::cout << "4 - проверка функции FindRectangle 2.2.5.5\n";
	std::cout << "5 - проверка функции FindMaxRectangle 2.2.5.6\n";
	std::cout << "6 - выход\n";
	
	while(true)
	{
		const int choice = GetElementConsoleInt();

		Rectangle rectangle[3]
		{
			{1,1,"red"},
			{2,2, "blue"},
			{3,1,"white"}
		};
		
		if(choice == 0)
		{
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
			
			return;
		}
		
		if(choice == 1)
		{
			Rectangle rectangleLocal;

			std::cout << "Color: \n";
			std::cin.get();
			std::getline(std::cin, rectangleLocal.Color);
			std::cout << "Length(положительное число): \n";
			rectangleLocal.Length = GetElementConsoleDouble();
			while (rectangleLocal.Length < 0)
			{
				std::cout << "положительное число/ попробуйте еще\n";
				rectangleLocal.Length = GetElementConsoleDouble();
			}
			std::cout << "Width(положительное число): \n";
			rectangleLocal.Width = GetElementConsoleDouble();
			while (rectangleLocal.Width < 0)
			{
				std::cout << "положительное число/ попробуйте еще\n";
				rectangleLocal.Width = GetElementConsoleDouble();
			}
			WriteRectangle(rectangleLocal);
			
			return;
		}

		if(choice == 2)
		{
			Rectangle* rectanglePoint = &rectangle[0];
			std::cout << "rectangle point: ";
			WriteRectangle(*rectanglePoint);
			
			rectanglePoint->Length = 23;
			rectanglePoint->Width = 64;
			rectangle->Color = "purple";

			Rectangle* rectangleNewPoint = rectanglePoint;
			std::cout << "rectangle new point: ";
			WriteRectangle(*rectangleNewPoint);
			
			return;
		}

		if(choice == 3)
		{
			std::cout << "До вызова функции Exchange\n";
			for (auto& item : rectangle)
			{
				WriteRectangle(item);
			}
			
			std::cout << "после вызова функции Exchange(меняем 0 и 1 эелемаент массива)\n";

			Exchange(rectangle[0], rectangle[1]);

			for (auto& item : rectangle)
			{
				WriteRectangle(item);
			}
			
			return;
		}

		if(choice == 4)
		{
			for (auto& item : rectangle)
			{
				WriteRectangle(item);
			}
			
			FindRectangle(rectangle, 3);

			return;
		}

		if (choice == 5)
		{
			for (auto& item : rectangle)
			{
				WriteRectangle(item);
			}

			FindMaxRectangle(rectangle, 3);

			return;
		}
		
		if(choice == 6)
		{
			return;
		}
		
		std::cout << "0 или 1\n";
	}
}


void WriteFlight(const Flight& flight)
{
	std::cout
		<< "DeparturePoint "
		<< flight.DeparturePoint
		<< " Destination "
		<< flight.Destination
		<< " FlightTime "
		<< flight.FlightTime << " minutes"
		<< std::endl;
}


void DemoFlight()
{
	std::cout << "DemoFlight\n";
	std::cout << "0 - для инициализации и вывода массива 2.2.3.3.\n";
	std::cout << "1 - для ввода полей структуры 2.2.3.2\n";
	std::cout << "2 - работа через указатель 2.2.4.1\n";
	std::cout << "3 - выход\n";

	Flight flight[3]
	{
		{"rus","us", 20},
		{"us", "rus", 20},
		{"", "", 0}
	};
	
	while(true)
	{
		const int choice = GetElementConsoleInt();
		if(choice == 0)
		{
			for (auto& item : flight)
			{
				WriteFlight(item);
			}
			
			return;
		}

		if(choice == 1)
		{
			Flight flightLocale;

			std::cout << "DeparturePoint: \n";
			std::cin.get();
			std::getline(std::cin, flightLocale.DeparturePoint);
			std::cout << "Destination: \n";
			std::getline(std::cin, flightLocale.Destination);
			std::cout << "FlightTime(minutes): \n";
			flightLocale.FlightTime = GetElementConsoleInt();
			WriteFlight(flightLocale);
			
			return;
		}

		if(choice == 2)
		{
			Flight* flightPoint = &flight[0];
			WriteFlight(*flightPoint);

			flightPoint->DeparturePoint = "new point";
			flightPoint->Destination = "new destination";
			flightPoint->FlightTime = 100;

			Flight* flightNewPoint = flightPoint;
			WriteFlight(*flightNewPoint);
			
			return;
		}
		
		if (choice == 3)
		{
			return;
		}

		std::cout << "0 или 1\n";
	}
}


void WriteMovie(const Movie& movie)
{
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
}


void DemoMovie()
{
	std::cout << "DemoMovie\n";
	std::cout << "0 - для инициализации и вывода массива 2.2.3.3.\n";
	std::cout << "1 - для ввода полей структуры 2.2.3.2\n";
	std::cout << "2 - работа через указатель 2.2.4.1\n";
	std::cout << "3 - выход\n";

	Movie movie[3]
	{
		{ "film", 2, 2000, "comedy", 9.5 },
		{"f",1,1999,"genre", 3},
		{"", 0, 0, "", 0}
	};
	
	while (true)
	{
		const int choice = GetElementConsoleInt();

		if (choice == 0)
		{
			for (auto& item : movie)
			{
				WriteMovie(item);
			}

			return;
		}

		if (choice == 1)
		{
			Movie movieLocale;

			std::cout << "Name: \n";
			std::cin.get();
			std::getline(std::cin, movieLocale.Name);
			std::cout << "Rating: \n";
			movieLocale.Rating = GetElementConsoleInt();
			std::cout << "Duration: \n";
			movieLocale.Duration = GetElementConsoleInt();
			std::cout << "Year: \n";
			movieLocale.Year = GetElementConsoleInt();
			std::cin.get();
			std::cout << "Genre: \n";
			std::cin.get();
			std::getline(std::cin, movieLocale.Genre);
			WriteMovie(movieLocale);

			return;
		}

		if(choice == 2)
		{
			Movie* moviePoint = &movie[0];
			WriteMovie(*moviePoint);

			moviePoint->Name = "new name";
			moviePoint->Rating = 12;
			moviePoint->Duration = 5;
			moviePoint->Year = 2021;
			moviePoint->Genre = "new Genre";

			Movie* movieNewPoint = moviePoint;
			WriteMovie(*movieNewPoint);

			return;
		}
		
		if (choice == 3)
		{
			return;
		}

		std::cout << "0 или 1\n";
	}
}


void WriteTime(const Time& time)
{
	std::cout
		<< "Hours "
		<< time.Hours
		<< " Minutes "
		<< time.Minutes
		<< " Seconds "
		<< time.Seconds
		<< std::endl;
}


void DemoTime()
{
	std::cout << "DemoTime\n";
	std::cout << "0 - для инициализации и вывода массива 2.2.3.3.\n";
	std::cout << "1 - для ввода полей структуры 2.2.3.2\n";
	std::cout << "2 - работа через указатель 2.2.4.1\n";
	std::cout << "3 - выход\n";

	Time time[3]
	{
		{1,1,1},
		{2,2,2},
		{3,3,3}
	};
	
	while(true)
	{
		const int choice = GetElementConsoleInt();

		if(choice == 0)
		{
			for (auto& item : time)
			{
				WriteTime(item);
			}
			
			return;
		}

		if (choice == 1)
		{
			Time timeLocale;

			std::cout << "Seconds(от 0 до 60) (если ввод будет больше то округление): \n";
			timeLocale.Seconds = GetElementConsoleInt();
			if(timeLocale.Seconds > 60)
			{
				timeLocale.Seconds = 60;
			}
			else if(timeLocale.Seconds < 0)
			{
				timeLocale.Seconds = 0;
			}
			
			std::cout << "Minutes(от 0 до 60) (если ввод будет больше то округление): \n";
			timeLocale.Minutes = GetElementConsoleInt();
			if (timeLocale.Minutes > 60)
			{
				timeLocale.Minutes = 60;
			}
			else if (timeLocale.Minutes < 0)
			{
				timeLocale.Minutes = 0;
			}
			
			std::cout << "Hours(от 0 до 23) (если ввод будет больше то округление): \n";
			timeLocale.Hours = GetElementConsoleInt();
			if (timeLocale.Hours > 23)
			{
				timeLocale.Hours = 23;
			}
			else if (timeLocale.Hours < 0)
			{
				timeLocale.Hours = 0;
			}
			
			WriteTime(timeLocale);

			return;
		}

		if(choice == 2)
		{
			Time* timePoint = &time[0];
			WriteTime(*timePoint);

			timePoint->Seconds = 34;
			timePoint->Minutes = 58;
			timePoint->Hours = 23;

			Time* timeNewPoint = timePoint;
			WriteTime(*timeNewPoint);

			return;
		}
		
		if (choice == 3)
		{
			return;
		}

		std::cout << "0 или 1\n";
	}
}

void WrongPointers()
{
	Movie movie;
	Flight flight;
	/*Movie* wrongMoviePointer = &flight;
	Flight* wrongFlightPointer = &movie;*/
	Movie* moviePointer = &movie;
	Flight* flightPointer = &flight;
}


void WriteRectangle(Rectangle& rectangle)
{
	std::cout
		<< "Прямоугольник имеет размер: "
		<< rectangle.Length << "*" << rectangle.Width
		<< std::endl;
}


void ReadRectangle(Rectangle& rectangle)
{
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
}


void DemoReadAndWriteRectangles()
{
	Rectangle rectangle[5];

	for(int i = 0; i < 5; i++)
	{
		std::cout << "rectangle #" << i << std::endl;
		ReadRectangle(rectangle[i]);
	}

	for (int i = 0; i < 5; i++)
	{
		std::cout << "rectangle #" << i << std::endl;
		WriteRectangle(rectangle[i]);
	}
}


void DemoDynamicFlight()
{
	Flight* flight = new Flight;

	flight->DeparturePoint = "piter";
	flight->Destination = "novokuz";
	flight->FlightTime = 4;
	WriteFlight(*flight);
	
	delete flight;
}


void FindShortestFlight(Flight* flights, int count)
{
	int minTime = flights[0].FlightTime;
	int index = 0;

	for (int i = 0; i < count; i++)
	{
		if(flights[i].FlightTime < minTime)
		{
			minTime = flights[i].FlightTime;
			index = i;
		}
	}

	std::cout << "Самый короткий рейс: \n";
	WriteFlight(flights[index]);
}


void DemoDynamicFlights()
{
	Flight* flight = new Flight[3]
	{
		{"rus","us", 20},
		{"us", "rus", 20},
		{"", "", 100}
	};

	for (int i = 0; i < 3; i++)
	{
		WriteFlight(flight[i]);
	}

	FindShortestFlight(flight, 3);
	
	delete[] flight;
}


//2.2.7.2-2.2.7.3
Rectangle* MakeRectangle(double length, 
	const double width, std::string& color)
{
	Rectangle* newRectangle = new Rectangle();
	newRectangle->Length = length;
	newRectangle->Width = width;
	newRectangle->Color = color;
	return newRectangle;
}


Rectangle* CopyRectangle(Rectangle& rectangle)
{
	Rectangle* copyRectangle = new Rectangle();
	copyRectangle->Length = rectangle.Length;
	copyRectangle->Width = rectangle.Width;
	copyRectangle->Color = rectangle.Color;
	return copyRectangle;
}


Time* MakeTime(const int hour, const int minute, int second)
{
	Time* newTime = new Time();
	newTime->Hours = hour;
	newTime->Minutes = minute;
	newTime->Seconds = second;
	return newTime;
}


Time* CopyTime(Time& time)
{
	Time* copyTime = new Time();
	copyTime->Hours = time.Hours;
	copyTime->Minutes = time.Minutes;
	copyTime->Seconds = time.Seconds;
	return copyTime;
}


MovieWithGenre* MakeMovie(std::string& name, int duration, 
	const int year, const Genre genre, const double rating)
{
	MovieWithGenre* newMove = new MovieWithGenre();
	newMove->Name = name;
	newMove->Duration = duration;
	newMove->Year = year;
	newMove->Genre = genre;
	newMove->Rating = rating;
	return newMove;
}


MovieWithGenre* CopyMovie(MovieWithGenre& movie)
{
	MovieWithGenre* copyMove = new MovieWithGenre();
	copyMove->Name = movie.Name;
	copyMove->Duration = movie.Duration;
	copyMove->Year = movie.Year;
	copyMove->Genre = movie.Genre;
	copyMove->Rating = movie.Rating;
	return copyMove;
}


Flight* MakeFlight(std::string& from, std::string& where, 
	const int flightTimeMinute)
{
	Flight* newFlight = new Flight();
	newFlight->DeparturePoint = from;
	newFlight->Destination = where;
	newFlight->FlightTime = flightTimeMinute;
	return newFlight;
}


Flight* CopyFlight(Flight& flight)
{
	Flight* copyFlight = new Flight();
	copyFlight->DeparturePoint = flight.DeparturePoint;
	copyFlight->Destination = flight.Destination;
	copyFlight->FlightTime = flight.FlightTime;
	return copyFlight;
}


//2.2.8.4
void DemoEnums()
{
	const int count = 6;
	
	Color colorArray[count] =
	{
		Red, Blue, DarkBlue,
		Green, Purple, Red
	};
	
	EducationForm  educationFormArray[count] =
	{
		Intramural, Extramural, Evening,
		Remote, Intramural, Intramural
	};

	Genre  genreArray[count] =
	{
		Comedy, Drama, Thriller,
		Action, Horror, Blockbuster
	};
	
	Season  seasonArray[count] =
	{
		Winter, Summer, Autumn,
		Spring, Winter, Summer
	};
	
	SmartphoneManufacturer smartphoneManufacturerArray[count] =
	{
		Apple, Xiaomi,  Samsung,
		Huawai, Motorola, Lenovo
	};
	
	WeekDay  weekDayArray[count] =
	{
		Monday, Tuesday, Wednesday,
		Thursday, Friday, Saturday
	};
}


int CountMoviesByGenre(MovieWithGenre* movies, int count, Genre genre)
{
	int genreCounter = 0;
	for (int i = 0; i < count; i++)
	{
		if (movies[i].Genre == genre)
		{
			genreCounter++;
		}
	}
	return genreCounter;
}


//2.2.9.5
MovieWithGenre* FindBestGenreMovie(MovieWithGenre* movies, const int count, const Genre genre)
{
	MovieWithGenre* searchBest = nullptr;
	for (int i = 0; i < count; i++)
	{
		if (movies[i].Genre == genre)
		{
			if (!searchBest || searchBest->Rating < movies[i].Rating)
			{
				searchBest = &movies[i];
			}
		}
	}
	return searchBest;
}


void  ReadMovie(MovieWithGenre& movie)
{
	std::cout << "Movie name: ";
	std::cin.get();
	std::getline(std::cin, movie.Name);
	std::cout << std::endl;

	std::cout << "Duration in minute: ";
	movie.Duration = GetElementConsoleInt();
	std::cout << std::endl;

	std::cout << "Year: ";
	movie.Year = GetElementConsoleInt();
	std::cout << std::endl;

	std::cout << "Genre: ";
	movie.Genre = ReadGenre();
	std::cout << std::endl;

	std::cout << "Rating: ";
	movie.Rating = GetElementConsoleInt();
	std::cout << std::endl;
}


void WriteMovie(MovieWithGenre& movie)
{
	std::cout << "The  movie: " << movie.Name << std::endl;
	std::cout << "Duration in minute: " << movie.Duration << std::endl;
	std::cout << "Year: " << movie.Year << std::endl;
	std::cout << "Genre: ";
	WriteGenre(movie.Genre);
	std::cout << std::endl;
	std::cout << "Rating: " << movie.Rating << std::endl;
}


void DemoMovieWithGenre()
{
	MovieWithGenre movie;
	movie.Name = "Film";
	movie.Duration = 106;
	movie.Genre = Drama;
	movie.Year = 2014;
	movie.Rating = 7.4;
	std::string movieName = "BestFilm";
	MovieWithGenre* movie2 = MakeMovie(movieName, 113,
		1994, Comedy, 7.3);
	WriteMovie(*movie2);
	delete movie2;

	MovieWithGenre* movieArray = new MovieWithGenre[3];
	for (int i = 0; i < 3; i++)
	{
		ReadMovie(movieArray[i]);
	}
	std::cout << CountMoviesByGenre(movieArray,
		3, ReadGenre()) << std::endl;
	MovieWithGenre* bestMovie = FindBestGenreMovie(movieArray,
		3, ReadGenre());
	if (bestMovie)
	{
		std::cout << "Best is: \n";
		WriteMovie(*bestMovie);
	}
	else
	{
		std::cout << "None" << std::endl;
	}
	delete[] movieArray;
}
