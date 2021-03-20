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


void DemoBand()
{
	const int songCount = 4;
	const int albumsCount = 3;

	Song** songs1 = new Song * [songCount];
	std::string nameSong1 = "first";
	std::string nameSong2 = "second";
	std::string nameSong3 = "third";
	std::string nameSong4 = "fourth";
	songs1[0] = new Song(nameSong1, 1, Rock);
	songs1[1] = new Song(nameSong2, 2, Pop);
	songs1[2] = new Song(nameSong3, 3, HipHop);
	songs1[3] = new Song(nameSong4, 4, Jazz);

	Song** songs2 = new Song * [songCount];
	nameSong1 = "One";
	nameSong2 = "Two";
	nameSong3 = "Three";
	nameSong4 = "Four";
	songs2[0] = new Song(nameSong1, 1, Jazz);
	songs2[1] = new Song(nameSong2, 2, Pop);
	songs2[2] = new Song(nameSong3, 3, HipHop);
	songs2[3] = new Song(nameSong4, 4, Jazz);

	Song** songs3 = new Song * [songCount];
	nameSong1 = "Song 1";
	nameSong2 = "Song 2";
	nameSong3 = "Song 3";
	nameSong4 = "Song 4";
	songs3[0] = new Song(nameSong1, 1, HipHop);
	songs3[1] = new Song(nameSong2, 2, HipHop);
	songs3[2] = new Song(nameSong3, 3, HipHop);
	songs3[3] = new Song(nameSong4, 4, HipHop);

	Album** albums = new Album * [albumsCount];
	std::string nameAlbum1 = "First Album";
	std::string nameAlbum2 = "Second Album";
	std::string nameAlbum3 = "Third Album";
	albums[0] = new Album(nameAlbum1, 1990, songCount, songs1);
	albums[1] = new Album(nameAlbum2, 1999, songCount, songs2);
	albums[2] = new Album(nameAlbum3, 2010, songCount, songs3);

	std::string nameBand = "Nirvana";
	std::string description = "kurt kob";
	Band* band = new Band(nameBand, description, albumsCount, albums);

	std::string foundSongName = "Song 1";
	Song* foundSong = band->FindSong(foundSongName);
	if (foundSong != nullptr)
	{
		std::cout << foundSong->WriteSong() << std::endl;
	}
	else
	{
		std::cout << "Не найдено" << std::endl;
	}

	Album* foundAlbum = band->FindAlbum(songs2[2]);
	if (foundAlbum != nullptr)
	{
		std::cout << "Название альбома: " << foundAlbum->GetAlbumTitle() << '\t'
			<< "Год выпуска: " << foundAlbum->GetIssueYear()
			<< '\t' << "Количество песен: " << foundAlbum->GetSongsCount()
			<< std::endl << std::endl;
	}
	else
	{
		std::cout << "Не найдено" << std::endl;
	}

	int allSongsCount;
	Song** allSongs = band->GetAllSongs(allSongsCount);
	for (int i = 0; i < allSongsCount; i++)
	{
		std::cout << allSongs[i]->WriteSong() << std::endl;
	}
	delete[] allSongs;
	std::cout << std::endl;

	int allSongsCountGenre;
	Song** allSongGenre = band->GetAllGenreSongs(HipHop, allSongsCountGenre);
	for (int i = 0; i < allSongsCountGenre; i++)
	{
		std::cout << allSongGenre[i]->WriteSong() << std::endl;
	}

	for (int i = 0; i < songCount; i++)
	{
		delete songs1[i];
		delete songs2[i];
		delete songs3[i];
	}

	for (int i = 0; i < albumsCount; i++)
	{
		delete albums[i];
	}

	delete[] allSongGenre;
	delete[] albums;
}