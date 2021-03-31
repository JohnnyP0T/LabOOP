#pragma once

#include <string>

/// @brief Человек.
class Person
{
private:
	
	/// @brief Имя.
	std::string _firstName;

	/// @brief Отчество.
	std::string _middleName;

	/// @brief Фамилия.
	std::string _surname;

public:

	/// @brief Конструктор.
	/// @param firstName Имя.
	/// @param middleName Отчество.
	/// @param surname Фамилия.
	Person(const std::string& firstName, const std::string& middleName,
		const std::string& surname);
	
	/// @brief Сетер имени.
	/// @param firstName Имя.
	void SetFirsName(const std::string& firstName);

	/// @brief Сетер отчества.
	/// @param middleName Отчество.
	void SetMiddleName(const std::string& middleName);

	/// @brief Сетер фамилии.
	/// @param surname Фамилия.
	void SetSurname(const std::string& surname);

	/// @brief Гетер имени.
	/// @return Имя.
	const std::string& GetFistName() const;

	/// @brief Гетер отчества.
	/// @return Отчество.
	const std::string& GetMiddleName() const;

	/// @brief Гетер фамилии.
	/// @return Фамилия.
	const std::string& GetSurname() const;
};

