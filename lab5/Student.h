#pragma once

#include <string>

#include "Person.h"

/// @brief Студент.
class Student : public Person
{
private:

	/// @brief Номер зачетной книжки.
	int _bookRecordsNumber;

	/// @brief Год поступления.
	int _receiptDate;

public:
	
	/// @brief Конструктор.
	/// @param firstName Имя.
	/// @param middleName Отчество.
	/// @param surname Фамилия.
	/// @param bookRecordsNumber Номер зачетной книжки. 
	/// @param receiptDate Год поступления.
	Student(const std::string& firstName, const std::string& middleName,
		const std::string& surname, int bookRecordsNumber,
		int receiptDate);

	/// @brief Сетер номера зачетной книжки.
	/// @param bookRecordsNumber Номер зачетной книжки. 
	void SetBookRecordsNumber(int bookRecordsNumber);

	/// @brief Сетер года поступления.
	/// @param receiptDate Год поступления.
	void SetReceiptDate(int receiptDate);

	/// @brief Гетер номера зачетной книжки.
	/// @return Номер зачетной книжки.
	int GetBookRecordsNumber() const;

	/// @brief Гетер года поступления.
	/// @return Год поступления.
	int GetReceiptDate() const;
};

