#include <string>
#include <iostream>

#include "Band.h"


Band::~Band()
{
	delete[] this->_albums;
}


Band::Band(std::string& nameBand, std::string& description,
           const int albumsCount, Album** albums)
{
	this->SetNameBand(nameBand);
	this->SetDescription(description);
	this->SetAlbums(albumsCount, albums);
}


void Band::SetNameBand(std::string& nameBand)
{
	this->_nameBand = nameBand;
}


void Band::SetDescription(std::string& description)
{
	this->_description = description;
}


void Band::SetAlbums(const int albumsCount, Album** albums)
{
	delete[] this->_albums;
	this->_albumsCount = albumsCount;
	this->_albums = albums;
}


std::string Band::GetNameBand() const
{
	return this->_nameBand;
}


std::string Band::GetDescription() const
{
	return this->_description;
}


int Band::GetAlbumsCount() const
{
	return this->_albumsCount;
}


Album** Band::GetAlbums() const
{
	return this->_albums;
}


Song* Band::FindSong(std::string& songTitle) const
{
	for (int i = 0; i < this->GetAlbumsCount(); i++)
	{
		Album* tempAlbum = this->GetAlbums()[i];
		for (int j = 0; j < tempAlbum->GetSongsCount(); j++)
		{
			Song* tempSong = tempAlbum->GetSongs()[j];
			if (tempSong->GetSongTitle() == songTitle)
			{
				return tempSong;
			}
		}
	}
	return nullptr;
}


Album* Band::FindAlbum(Song* song) const
{
	for (int i = 0; i < this->GetAlbumsCount(); i++)
	{
		Album* tempAlbum = this->GetAlbums()[i];
		for (int j = 0; j < tempAlbum->GetSongsCount(); j++)
		{
			if (tempAlbum->GetSongs()[j]->GetSongTitle() ==
				song->GetSongTitle()
				&& tempAlbum->GetSongs()[j]->GetSongGenre() ==
				song->GetSongGenre()
				&& tempAlbum->GetSongs()[j]->GetDuration() ==
				song->GetDuration())
			{
				return tempAlbum;
			}
		}
	}
	return nullptr;
}


Song** Band::GetAllSongs(int& allSongsCount) const
{
	allSongsCount = 0;
	for (int i = 0; i < this->GetAlbumsCount(); i++)
	{
		allSongsCount += this->GetAlbums()[i]->GetSongsCount();
	}
	Song** allSongs = new Song * [allSongsCount];
	int indexAllSongs = 0;
	for (int i = 0; i < this->GetAlbumsCount(); i++)
	{
		for (int j = 0; j < this->GetAlbums()[i]->GetSongsCount(); j++)
		{
			allSongs[indexAllSongs] = this->GetAlbums()[i]->GetSongs()[j];
			indexAllSongs++;
		}
	}
	return allSongs;
}


Song** Band::GetAllGenreSongs(const Genre findingGenre, int& allSongsCount) const
{
	allSongsCount = 0;
	for (int i = 0; i < this->GetAlbumsCount(); i++)
	{
		for (int j = 0; j < this->GetAlbums()[i]->GetSongsCount(); j++)
		{
			if (this->GetAlbums()[i]->GetSongs()[j]->GetSongGenre()
				== findingGenre)
			{
				allSongsCount++;
			}
		}

	}
	Song** allSongs = new Song * [allSongsCount];
	int indexAllSongs = 0;
	for (int i = 0; i < this->GetAlbumsCount(); i++)
	{
		for (int j = 0; j < this->GetAlbums()[i]->GetSongsCount(); j++)
		{
			if (this->GetAlbums()[i]->GetSongs()[j]->GetSongGenre()
				== findingGenre)
			{
				allSongs[indexAllSongs] = this->GetAlbums()[i]->GetSongs()[j];
				indexAllSongs++;
			}
		}
	}
	return allSongs;
}


