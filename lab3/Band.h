#pragma once

#include <string>

#include "Album.h"

/// @brief ������.
class Band
{
private:
	/// @brief ��������.
	std::string _nameBand;
	/// @brief ��������.
	std::string _description;
	/// @brief ���������� ��������.
	int _albumsCount;
	/// @brief �������.
	Album** _albums = nullptr;

public:
	/// @brief ����� ��������.
	/// @param nameBand ��������.
	void SetNameBand(std::string& nameBand);

	/// @brief ����� ��������.
	/// @param description ��������.
	void SetDescription(std::string& description);

	/// @brief ����� �������.
	/// @param albumsCount ���������� ��������.
	/// @param albums �������.
	void SetAlbums(int albumsCount, Album** albums);

	/// @brief ����� �����.
	/// @param songTitle ��������.
	/// @return �����.
	Song* FindSong(std::string& songTitle) const;

	/// @brief ����� �������.
	/// @param song �����.
	/// @return ������.
	Album* FindAlbum(Song* song) const;

	/// @brief ����� �����.
	/// @param allSongsCount ���������� �����.
	/// @return �����.
	Song** GetAllSongs(int& allSongsCount) const;

	/// @brief ����� �� �����
	/// @param findingGenre ����.
	/// @param allSongsCount ����������.
	/// @return �����.
	Song** GetAllGenreSongs(Genre findingGenre, int& allSongsCount) const;

	/// @brief ����� ��������.
	/// @return ��������.
	std::string GetNameBand() const;

	/// @brief ����� ��������.
	/// @return ��������.
	std::string GetDescription() const;

	/// @brief ����� ���������� ��������.
	/// @return ����������.
	int GetAlbumsCount() const;

	/// @brief ����� ��������.
	/// @return �������.
	Album** GetAlbums() const;

	/// @brief �����������
	/// @param nameBand ��������.
	/// @param description ��������.
	/// @param albumsCount ���������� ��������.
	/// @param albums �������.
	Band(std::string& nameBand, std::string& description,
		int albumsCount, Album** albums);

	~Band();
};

/// @brief - 3.4.5
void DemoBand();
