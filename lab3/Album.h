#pragma once

#include <string>

#include "Song.h"


/// @brief ������.
class Album
{
private:
	/// @brief ��������.
	std::string _albumTitle;
	/// @brief ��� �������.
	int _issueYear;
	/// @brief ���������� �����.
	int _songsCount;
	/// @brief ������ �����.
	Song** _songs = nullptr;

public:
	/// @brief ����� ��������.
	/// @param albumTitle ��������.
	void SetAlbumTitle(std::string& albumTitle);

	/// @brief ����� ����.
	/// @param issueYear ���.
	void SetIssueYear(int issueYear);

	/// @brief ����� �����.
	/// @param songsCount ���������� �����.
	/// @param songs ������ �����.
	void SetSongs(int songsCount, Song** songs);

	/// @brief ����� ��������.
	/// @return ��������.
	std::string GetAlbumTitle() const;

	/// @brief ����� ���� �������.
	/// @return ��� �������.
	int GetIssueYear() const;

	/// @brief ����� ���������� �����.
	/// @return ���������� �����.
	int GetSongsCount() const;

	/// @brief ����� �����.
	/// @return �����.
	Song** GetSongs() const;

	/// @brief �����������.
	/// @param albumTitle ��������.
	/// @param issueYear ��� �������.
	/// @param songsCount ���������� �����.
	/// @param songs �����.
	Album(std::string& albumTitle, int issueYear, int songsCount,
		Song** songs);

	~Album();
};

