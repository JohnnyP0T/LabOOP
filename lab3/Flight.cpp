#include <exception>
#include <iostream>

#include "Flight.h"


Flight::Flight(std::string& flightNumber, std::string& from,
               std::string& purpose, Time* departureTime, Time* purposeTime)
{
	this->SetFlightNumber(flightNumber);
	this->SetFrom(from);
	this->SetPurpose(purpose);
	this->SetDepartureTime(departureTime);
	this->SetPurposeTime(purposeTime);
}


void Flight::SetFlightNumber(std::string& flightNumber)
{
	this->_flightNumber = flightNumber;
}


void Flight::SetFrom(std::string& from)
{
	this->_from = from;
}


void Flight::SetPurpose(std::string& purpose)
{
	this->_purpose = purpose;
}


void Flight::SetDepartureTime(Time* departureTime)
{
	this->_departureTime = departureTime;
}


void Flight::SetPurposeTime(Time* purposeTime)
{
	const int minutesInHour = 60;
	if (this->_departureTime->GetYear() > purposeTime->GetYear())
	{
		throw std::exception("Error");
	}

	if (this->_departureTime->GetYear() == purposeTime->GetYear())
	{
		if (this->_departureTime->GetMonth() > purposeTime->GetMonth())
		{
			throw std::exception("Error");
		}
		if (this->_departureTime->GetMonth() ==
			purposeTime->GetMonth())
		{
			if (this->_departureTime->GetDay() > purposeTime->GetDay())
			{
				throw std::exception("Error");
			}
			if (this->_departureTime->GetDay() >
				purposeTime->GetDay())
			{
				if (this->_departureTime->GetHour() * minutesInHour
					+ this->_departureTime->GetMinute() >=
					purposeTime->GetHour() * minutesInHour +
					purposeTime->GetMinute())
				{
					throw std::exception("Error");
				}
			}
		}
	}
	this->_purposeTime = purposeTime;
}


std::string Flight::GetFlightNumber() const
{
	return this->_flightNumber;
}


std::string Flight::GetFrom() const
{
	return this->_from;
}


std::string Flight::GetPurpose() const
{
	return this->_purpose;
}


Time* Flight::GetDepartureTime() const
{
	return this->_departureTime;
}


Time* Flight::GetPurposeTime() const
{
	return this->_purposeTime;
}


int Flight::GetFlightTimeMinutes() const
{
	Time* departureTime = this->GetDepartureTime();
	Time* purposeTime = this->GetPurposeTime();
	int timeDifferenceMinutes = purposeTime->GetMinute()
		- departureTime->GetMinute();
	int timeDifferenceHours = purposeTime->GetHour()
		- departureTime->GetHour();
	int minutesInHour = 60;
	
	if (timeDifferenceMinutes < 0)
	{
		timeDifferenceMinutes += minutesInHour;
		timeDifferenceHours--;
	}
	
	return timeDifferenceHours * minutesInHour + timeDifferenceMinutes;
}


constexpr int COUNT = 5;


void DemoFlightWithTime()
{
	Flight* flights[COUNT];
	Time* departureTime1 = new Time(1, 2, 3, 1, 4);
	Time* purposeTime1 = new Time(1, 3, 2, 4, 3);
	std::string flightNumber = "34f";
	std::string from = "moskva";
	std::string purpose = "piter";
	flights[0] = new Flight(flightNumber, from, purpose, departureTime1,
		purposeTime1);

	flightNumber = "3tg";
	from = "ge";
	purpose = "3rfg";
	Time* departureTime2 = new Time(2021, 3, 22, 1, 22);
	Time* purposeTime2 = new Time(2021, 4, 23, 1, 22);
	flights[1] = new Flight(flightNumber, from, purpose, departureTime2,
		purposeTime2);

	flightNumber = "g3";
	from = "Kem";
	purpose = "Tomsk";
	Time* departureTime3 = new Time(2021, 3, 2, 9, 30);
	Time* purposeTime3 = new Time(2021, 3, 24, 12, 30);
	flights[2] = new Flight(flightNumber, from, purpose, departureTime3,
		purposeTime3);

	flightNumber = "gr3";
	from = "Novokuznezk";
	purpose = "Osinniki";
	Time* departureTime4 = new Time(2021, 10, 2, 4, 30);
	Time* purposeTime4 = new Time(2021, 10, 21, 12, 30);
	flights[3] = new Flight(flightNumber, from, purpose, departureTime4,
		purposeTime4);

	flightNumber = "ge";
	from = "US";
	purpose = "rus";
	Time* departureTime5 = new Time(2021, 6, 12, 3, 0);
	Time* purposeTime5 = new Time(2021, 6, 13, 4, 0);
	flights[4] = new Flight(flightNumber, from, purpose, departureTime5,
		purposeTime5);

	for (int i = 0; i < COUNT; i++)
	{
		std::cout << flights[i]->GetFlightNumber() << "\t" << flights[i]->GetFrom()
			<< '-' << flights[i]->GetPurpose() << "\t Вылет "
			<< flights[i]->GetDepartureTime()->GetMonth() << '.'
			<< flights[i]->GetDepartureTime()->GetDay() << '\t'
			<< flights[i]->GetDepartureTime()->GetHour() << ':'
			<< flights[i]->GetDepartureTime()->GetMinute()
			<< "\tПрибытие " << flights[i]->GetPurposeTime()->GetMonth()
			<< '.' << flights[i]->GetPurposeTime()->GetDay()
			<< '\t' << flights[i]->GetPurposeTime()->GetHour() << ':'
			<< flights[i]->GetPurposeTime()->GetMinute() << std::endl;
	}

	int timeDifference = flights[0]->GetFlightTimeMinutes();
	int minutesInHour = 60;
	std::cout << flights[0]->GetFlightNumber() << "\t" << flights[0]->GetFrom()
		<< '-' << flights[0]->GetPurpose() << "\tВремя полета: "
		<< timeDifference / minutesInHour << "h "
		<< timeDifference % minutesInHour << "min" << std::endl;

	delete departureTime1;
	delete departureTime2;
	delete departureTime3;
	delete departureTime4;
	delete departureTime5;

	delete purposeTime1;
	delete purposeTime2;
	delete purposeTime3;
	delete purposeTime4;
	delete purposeTime5;
	
	for (int i = 0; i < COUNT; i++)
	{
		delete flights[i];
	}
}

