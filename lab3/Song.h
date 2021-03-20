#pragma once

#include <string>
#include "Genre.h"

/// @brief �����.
class Song
{
private:
	/// @brief ��������.
	std::string _songTitle;
	/// @brief �����������������.
	int _durationInSeconds;
	/// @brief ����.
	Genre _songGenre;

public:
	/// @brief ����� ��������.
	/// @param songTitle ��������.
	void SetSongTitle(std::string& songTitle);

	/// @brief ����� �����������������.
	/// @param durationInSeconds �����������������.
	void SetDuration(int durationInSeconds);

	/// @brief ����� �����.
	/// @param genre ����.
	void SetGenre(Genre genre);

	/// @brief ����� ��������.
	/// @return ��������.
	std::string GetSongTitle() const;

	/// @brief ����� �����������������.
	/// @return �����������������.
	int GetDuration() const;

	/// @brief ����� �����.
	/// @return ����.
	Genre GetSongGenre() const;

	/// @brief ����� �����.
	std::string WriteSong() const;

	/// @brief �����������.
	/// @param songTitle ��������.
	/// @param durationInSeconds �����������������.
	/// @param songGenre ����.
	Song(std::string& songTitle, int durationInSeconds,
		Genre songGenre);
};

