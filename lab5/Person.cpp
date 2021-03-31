#include "Person.h"


Person::Person(const std::string& firstName, const std::string& middleName,
	const std::string& surname)
{
	this->SetFirsName(firstName);
	this->SetMiddleName(middleName);
	this->SetSurname(surname);
}


void Person::SetFirsName(const std::string& firstName)
{
	this->_firstName = firstName;
}


void Person::SetMiddleName(const std::string& middleName)
{
	this->_middleName = middleName;
}


void Person::SetSurname(const std::string& surname)
{
	this->_surname = surname;
}


const std::string& Person::GetFistName() const
{
	return  this->_firstName;
}


const std::string& Person::GetMiddleName() const
{
	return  this->_middleName;
}


const std::string& Person::GetSurname() const
{
	return  this->_surname;
}
