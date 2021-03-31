#include "Student.h"


Student::Student(const std::string& firstName, const std::string& middleName,
	const std::string& surname, const int bookRecordsNumber,
	const int receiptDate) : Person(firstName, middleName, surname)
{
	this->SetBookRecordsNumber(bookRecordsNumber);
	this->SetReceiptDate(receiptDate);
}


void Student::SetBookRecordsNumber(const int bookRecordsNumber)
{
	this->_bookRecordsNumber = bookRecordsNumber;
}


void Student::SetReceiptDate(const int receiptDate)
{
	this->_receiptDate = receiptDate;
}


int Student::GetBookRecordsNumber() const
{
	return this->_bookRecordsNumber;
}


int Student::GetReceiptDate() const
{
	return this->_receiptDate;
}
