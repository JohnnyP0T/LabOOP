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




