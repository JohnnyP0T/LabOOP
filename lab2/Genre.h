#pragma once

/// @brief ����	������.
enum Genre
{
	Comedy,
	Drama,
	Thriller,
	Action,
	Horror,
	Blockbuster
};

/// @brief ����� �����.
/// @param ����. 
void WriteGenre(Genre);

/// @brief ���� �����.
Genre ReadGenre();