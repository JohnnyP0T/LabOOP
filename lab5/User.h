#pragma once
#include <string>

/// @brief Обычный пользователь.
class User
{
private:

	/// @brief айди.
	int _id;

	/// @brief Логин.
	std::string _login;

	/// @brief Пароль.
	std::string _password;

private:

	/// @brief Сетер для айди.
	/// @param id айди.
	void SetId(int id);

public:

	/// @brief Сетер логина.
	/// @param login Логин.
	void SetLogin(const std::string& login);

	/// @brief Сетер пароля.
	/// @param password Пароль.
	void SetPassword(const std::string& password);

	/// @brief Гетер айди.
	/// @return айди.
	int GetId() const;

	/// @brief Гетер логина.
	/// @return Логин.
	const std::string& GetLogin() const;

	/// @brief Гетер пароля.
	/// @return Пароль.
	const std::string& GetPassword() const;

	/// @brief Конструктор.
	/// @param id айди.
	/// @param login Логин.
	/// @param password Пароль.
	User(int id, const std::string& login, const std::string& password);

	/// @brief Проверка на корректность пароля.
	/// @param password Пароль.
	/// @retval true Корректный пароль.
	/// @retval false Некорректный пароль.
	bool IsCorrectPassword(const std::string& password) const;
};

