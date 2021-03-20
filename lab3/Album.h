#pragma once

#include <string>

#include "Song.h"


/// @brief Альбом.
class Album
{
private:
	/// @brief Название.
	std::string _albumTitle;
	/// @brief Год выпуска.
	int _issueYear;
	/// @brief Количество песен.
	int _songsCount;
	/// @brief Массив песен.
	Song** _songs = nullptr;

public:
	/// @brief Сетер названия.
	/// @param albumTitle Название.
	void SetAlbumTitle(std::string& albumTitle);

	/// @brief Сетер Года.
	/// @param issueYear Год.
	void SetIssueYear(int issueYear);

	/// @brief Сетер песен.
	/// @param songsCount Количество песен.
	/// @param songs Массив песен.
	void SetSongs(int songsCount, Song** songs);

	/// @brief Гетер названия.
	/// @return Название.
	std::string GetAlbumTitle() const;

	/// @brief Гетер года выпуска.
	/// @return Год выпуска.
	int GetIssueYear() const;

	/// @brief Гетер количества песен.
	/// @return Количество песен.
	int GetSongsCount() const;

	/// @brief Гетер песен.
	/// @return Песни.
	Song** GetSongs() const;

	/// @brief Конструктор.
	/// @param albumTitle Название.
	/// @param issueYear Год выпуска.
	/// @param songsCount Количество песен.
	/// @param songs Песни.
	Album(std::string& albumTitle, int issueYear, int songsCount,
		Song** songs);

	~Album();
};

