#include <iostream>

#include "OutputFunction.h"


void ShowName(Person& person)
{
	std::cout << person.GetFistName() << " " << person.GetMiddleName()
		<< " " << person.GetSurname() << std::endl;
}
