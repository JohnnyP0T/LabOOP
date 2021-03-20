#include <string>

#include "Song.h"


Song::Song(std::string& songTitle, const int durationInSeconds, const Genre songGenre)
{
	this->SetSongTitle(songTitle);
	this->SetDuration(durationInSeconds);
	this->SetGenre(songGenre);
}


void Song::SetSongTitle(std::string& songTitle)
{
	this->_songTitle = songTitle;
}


void Song::SetDuration(const int durationInSeconds)
{
	if (durationInSeconds < 0)
	{
		throw std::exception("Error");
	}
	this->_durationInSeconds = durationInSeconds;
}


void Song::SetGenre(const Genre genre)
{
	this->_songGenre = genre;
}


std::string Song::GetSongTitle() const
{
	return this->_songTitle;
}


int Song::GetDuration() const
{
	return this->_durationInSeconds;
}


Genre Song::GetSongGenre() const
{
	return this->_songGenre;
}


std::string Song::WriteSong() const
{
	return "Title: " + this->GetSongTitle() + '\t' + "Duration: " +
		std::to_string(this->GetDuration()) + '\t' + "Genre: " +
		std::to_string(this->GetSongGenre());
}
