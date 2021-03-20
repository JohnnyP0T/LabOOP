#include <exception>
#include <string>

#include "Album.h"


Album::~Album()
{
	delete[] this->_songs;
}


Album::Album(std::string& albumTitle, const int issueYear, const int songsCount,
	Song** songs)
{
	this->SetAlbumTitle(albumTitle);
	this->SetIssueYear(issueYear);
	this->SetSongs(songsCount, songs);
}


void Album::SetAlbumTitle(std::string& albumTitle)
{
	this->_albumTitle = albumTitle;
}


void Album::SetIssueYear(const int issueYear)
{
	if (issueYear < 0)
	{
		throw std::exception("√од выпуска не может быть отрицательным");
	}
	this->_issueYear = issueYear;
}


void Album::SetSongs(const int songsCount, Song** songs)
{
	delete[] this->_songs;
	this->_songsCount = songsCount;
	this->_songs = songs;
}


std::string Album::GetAlbumTitle() const
{
	return this->_albumTitle;
}


int Album::GetIssueYear() const
{
	return this->_issueYear;
}


int Album::GetSongsCount() const
{
	return this->_songsCount;
}


Song** Album::GetSongs() const
{
	return this->_songs;
}
