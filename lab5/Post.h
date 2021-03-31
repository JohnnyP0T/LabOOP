#pragma once

#include <string>

/// @brief Пост в блоге пользователя с платным аккаунтом.
class Post
{
private:

	/// @brief Заглавие.
	std::string _title;

	/// @brief Текст.
	std::string _text;
	
public:

	/// @brief Сетер заглавия.
	/// @param title Заглавие.
	void SetTitle(const std::string& title);

	/// @brief Сетер текста. 
	/// @param text Текст.
	void SetText(const std::string& text);

	/// @brief Гетер заглавие.
	/// @return Заглавие.
	const std::string& GetTitle() const;

	/// @brief Гетер текста.
	/// @return Текст
	const std::string& GetText() const;

	/// @brief Конструктор.
	/// @param title Заглавие.
	/// @param text Текст.
	Post(const std::string& title, const std::string& text);
};

