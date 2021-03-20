#pragma once

#include <string>

#include "Album.h"

/// @brief Группа.
class Band
{
private:
	/// @brief Название.
	std::string _nameBand;
	/// @brief Описание.
	std::string _description;
	/// @brief Количество альбомов.
	int _albumsCount;
	/// @brief Альбомы.
	Album** _albums = nullptr;

public:
	/// @brief Сетер названия.
	/// @param nameBand Название.
	void SetNameBand(std::string& nameBand);

	/// @brief Сетер описания.
	/// @param description Описание.
	void SetDescription(std::string& description);

	/// @brief Сетер альбома.
	/// @param albumsCount Количество альбомов.
	/// @param albums Альбомы.
	void SetAlbums(int albumsCount, Album** albums);

	/// @brief Поиск песни.
	/// @param songTitle Название.
	/// @return Песня.
	Song* FindSong(std::string& songTitle) const;

	/// @brief Поиск альбома.
	/// @param song Песня.
	/// @return Альбом.
	Album* FindAlbum(Song* song) const;

	/// @brief Гетер песен.
	/// @param allSongsCount Количество песен.
	/// @return Песни.
	Song** GetAllSongs(int& allSongsCount) const;

	/// @brief Гетер по жанру
	/// @param findingGenre Жанр.
	/// @param allSongsCount Количество.
	/// @return Песни.
	Song** GetAllGenreSongs(Genre findingGenre, int& allSongsCount) const;

	/// @brief Гетер Названия.
	/// @return Название.
	std::string GetNameBand() const;

	/// @brief Гетер описания.
	/// @return Описание.
	std::string GetDescription() const;

	/// @brief Гетер количества альбомов.
	/// @return Количество.
	int GetAlbumsCount() const;

	/// @brief Гетер Альбомов.
	/// @return Альбомы.
	Album** GetAlbums() const;

	/// @brief Конструктор
	/// @param nameBand Название.
	/// @param description Описание.
	/// @param albumsCount Количество альбомов.
	/// @param albums Альбомы.
	Band(std::string& nameBand, std::string& description,
		int albumsCount, Album** albums);

	~Band();
};

/// @brief - 3.4.5
void DemoBand();
