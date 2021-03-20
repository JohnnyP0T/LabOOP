#pragma once

#include <string>
#include "Genre.h"

/// @brief Песня.
class Song
{
private:
	/// @brief Название.
	std::string _songTitle;
	/// @brief Продолжительность.
	int _durationInSeconds;
	/// @brief Жанр.
	Genre _songGenre;

public:
	/// @brief Сетер названия.
	/// @param songTitle Название.
	void SetSongTitle(std::string& songTitle);

	/// @brief Сетер продолжительности.
	/// @param durationInSeconds Продолжительность.
	void SetDuration(int durationInSeconds);

	/// @brief Сетер жанра.
	/// @param genre Жанр.
	void SetGenre(Genre genre);

	/// @brief Гетер названия.
	/// @return Название.
	std::string GetSongTitle() const;

	/// @brief Гетер продолжительности.
	/// @return продолжительность.
	int GetDuration() const;

	/// @brief Гетер жанра.
	/// @return Жанр.
	Genre GetSongGenre() const;

	/// @brief Вывод песни.
	std::string WriteSong() const;

	/// @brief Конструктор.
	/// @param songTitle Название.
	/// @param durationInSeconds Продолжительность.
	/// @param songGenre Жанр.
	Song(std::string& songTitle, int durationInSeconds,
		Genre songGenre);
};

