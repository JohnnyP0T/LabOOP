#pragma once

#include "Post.h"
#include "User.h"

/// @brief Пользователь с платным аккаунтом
class PaidUser : public User
{
private:

	/// @brief Посты.
	Post* _posts;

	/// @brief Количество постов.
	int _postsCount;

public:

	/// @brief Сетер постов.
	/// @param posts Посты.
	/// @param postsCount Количество постов.
	void SetPosts(Post* posts, int postsCount);

	/// @brief Гетер постов.
	/// @return Посты.
	Post* GetPosts() const;

	/// @brief Гетер количества постов.
	/// @return Количество постов.
	int GetPostsCount() const;

	/// @brief Конструктор.
	/// @param id айди.
	/// @param login Логин.
	/// @param password Пароль.
	/// @param posts Посты.
	/// @param postsCount Количество постов.
	PaidUser(int id, const std::string& login, const std::string& password,
		Post* posts, int postsCount);

	/// @brief Конструктор.
	/// @param id айди.
	/// @param login Логин.
	/// @param password Пароль.
	PaidUser(int id, const std::string& login, const std::string& password);
};

