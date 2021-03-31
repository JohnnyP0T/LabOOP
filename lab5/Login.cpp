#include <exception>

#include "Login.h"


User* Login(User** users, const int usersCount,
	const std::string& enteredLogin, const std::string& enteredPassword)
{
	for (int i = 0; i < usersCount; i++)
	{
		if (users[i]->GetLogin() == enteredLogin)
		{
			if (users[i]->IsCorrectPassword(enteredPassword))
			{
				return users[i];
			}
			else
			{
				throw std::exception("Uncorrected password");
			}
		}
	}
	return nullptr;
}