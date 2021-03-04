#include <cmath>

#include <iostream>


double GetPower(double base, int exponent)
{
	double result = 1;

	if (exponent < 0) {
		exponent = -exponent;
		for (long i = 0; i < exponent; i++) {
			result *= base;
		}

		return 1 / result;
	}
	else {
		for (long i = 0; i < exponent; i++) {
			result *= base;
		}

		return result;
	}
}


void Point1132()
{
	std::cout << "2.0 ^ 5 = " << GetPower(2.0, 5);
	std::cout << "\n3.0 ^ 4 = " << GetPower(3.0, 4);
	std::cout << "\n-2.0 ^ 5 = " << GetPower(-2.0, 5);
}


void RoundToTens(int& value) // Point1134
{
	if(value % 10 >= 5)
	{
		value += 10 - value % 10;
	}
	else
	{
		value -= value%10;
	}
}

//1134
void Point1133()
{
	int a = 14;
	RoundToTens(a);
	std::cout << "For 14 rounded value is " << a;
	a = 191;
	RoundToTens(a);
	std::cout << "\nFor 191 rounded value is " << a;
	a = 27;
	RoundToTens(a);
	std::cout << "\nFor 27 rounded value is " << a;
}
