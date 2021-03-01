#include <iostream>

#include "Color.h"

#include "IOMenu.h"


//2.2.8.5
void WriteColor(const Color color)
{
	switch (color)
	{
	case Red:
	{
		std::cout << "Red color" << std::endl;
		break;
	}
	case Orange:
	{
		std::cout << "Orange color" << std::endl;
		break;
	}
	case Yellow:
	{
		std::cout << "Yellow color" << std::endl;
		break;
	}
	case Green:
	{
		std::cout << "Green color" << std::endl;
		break;
	}
	case Blue:
	{
		std::cout << "Blue color" << std::endl;
		break;
	}
	case DarkBlue:
	{
		std::cout << "Dark blue color" << std::endl;
		break;
	}
	case Purple:
	{
		std::cout << "Purple color" << std::endl;
		break;
	}
	default:
	{
		std::cout << " Unknown color " << std::endl;
		break;
	}
	}
}


//2.2.8.6
Color ReadColor()
{
	std::cout << "0 - 6 "
		<< "0 - Red, 1 - Orange, 2 - Yellow, "
		<< "3 - Green, 4 - Blue,"
		<< "5 - Dark blue, 6  - Purple:" << std::endl;
	const int colorNum = GetElementConsoleInt();
	Color  color;
	switch (colorNum)
	{
	case 0:
	{
		color = Red;
		break;
	}
	case 1:
	{
		color = Orange;
		break;
	}
	case 2:
	{
		color = Yellow;
		break;
	}
	case 3:
	{
		color = Green;
		break;
	}
	case 4:
	{
		color = Blue;
		break;
	}
	case 5:
	{
		color = DarkBlue;
		break;
	}
	case 6:
	{
		color = Purple;
		break;
	}
	default:
	{
		std::cout << "Strange number! I'll take red!" << std::endl;
		color = Red;
		break;
	}
	}
	return color;
}


//2.2.8.7
int CountRed(const Color* colors, const int count)
{
	int redCounter = 0;
	for (int i = 0; i < count; i++)
	{
		if (colors[i] == Red)
		{
			redCounter++;
		}
	}
	return redCounter;
}


//2.2.8.8
int CountColor(Color* colors, const int count, const Color findColor)
{
	int colorCounter = 0;
	for (int i = 0; i < count; i++)
	{
		if (colors[i] == findColor)
		{
			colorCounter++;
		}
	}
	return colorCounter;
}