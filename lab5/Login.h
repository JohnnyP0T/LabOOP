#pragma once

#include <string>

#include "User.h"

/// @brief Поиск пользователя, и проверка пароля.
/// @param users Пользоватлеи.
/// @param usersCount Количество пользователей.
/// @param enteredLogin Логин.
/// @param enteredPassword Пароль.
/// @return Пользователь.
/// @retval nullptr Пользователь не найден.
User* Login(User** users, int usersCount,
	const std::string& enteredLogin, const std::string& enteredPassword);
