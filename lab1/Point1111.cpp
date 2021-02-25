#include <iostream>

void Breakpoints_()
{
	double add = 1.0;
	double sum = 0.0;
	for (int i = 0; i < 10; i++)
	{
		sum += add * i;
		add *= 1.1;
	}
	std::cout << "Total sum is " << sum << std::endl;
}

void Point1111()
{
	Breakpoints_();
}