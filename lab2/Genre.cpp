#include <iostream>

#include "Genre.h"

#include "IOMenu.h"


void WriteGenre(Genre genre)
{
	switch (genre)
	{
	case Comedy:
	{
		std::cout << " Comedy " << std::endl;
		break;
	}
	case Drama:
	{
		std::cout << " Drama " << std::endl;
		break;
	}
	case Thriller:
	{
		std::cout << " Thriller " << std::endl;
		break;
	}
	case Action:
	{
		std::cout << " Action " << std::endl;
		break;
	}
	case Horror:
	{
		std::cout << " Horror " << std::endl;
		break;
	}
	case Blockbuster:
	{
		std::cout << " Blockbuster " << std::endl;
		break;
	}
	default:
	{
		std::cout << " Unknown " << std::endl;
		break;
	}
	}
}


Genre ReadGenre()
{
	std::cout << "Input the number from 0 to 5 "
		<< "(0 - Comedy, 1 - Drama, 2 - Thriller, "
		<< "3 - Action, 4 - Horror,"
		<< "5 - Blockbuster):" << std::endl;
	const int colorNum = GetElementConsoleInt();
	Genre  genre;
	switch (colorNum)
	{
	case 0:
	{
		genre = Comedy;
		break;
	}
	case 1:
	{
		genre = Drama;
		break;
	}
	case 2:
	{
		genre = Thriller;
		break;
	}
	case 3:
	{
		genre = Action;
		break;
	}
	case 4:
	{
		genre = Horror;
		break;
	}
	case 5:
	{
		genre = Blockbuster;
		break;
	}
	default:
	{
		std::cout << "Strange number! I'll take Horror!" << std::endl;
		genre = Horror;
		break;
	}
	}
	return genre;
}