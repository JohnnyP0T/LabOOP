#pragma once

/// @brief Жанр	фильма.
enum Genre
{
	Comedy,
	Drama,
	Thriller,
	Action,
	Horror,
	Blockbuster
};

/// @brief Вывод жанра.
/// @param Жанр. 
void WriteGenre(Genre);

/// @brief Ввод жанра.
Genre ReadGenre();