#pragma once
#include <string>
#include "Person.h"

/// @brief Учитель.
class Teacher : public Person
{
private:
	
	/// @brief Должность.
	std::string _post;

public:

	/// @brief Конструктор.
	/// @param firstName Имя.
	/// @param middleName Отчество.
	/// @param surname Фамилия.
	/// @param post Должность
	Teacher(const std::string& firstName, const std::string& middleName,
		const std::string& surname, std::string& post);

	/// @brief Сетер должности.
	/// @param post Должность.
	void SetPost(const std::string& post);

	/// @brief Гетер должности.
	/// @return Должность.
	const std::string& GetPost() const;
};

