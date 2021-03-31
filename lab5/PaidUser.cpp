#include <exception>

#include "PaidUser.h"


void PaidUser::SetPosts(Post* posts, const int postsCount)
{
	if (postsCount < 0)
	{
		throw std::exception("Posts count must be more than 0");
	}
	_posts = posts;
	_postsCount = postsCount;
}


Post* PaidUser::GetPosts() const
{
	return this->_posts;
}


int PaidUser::GetPostsCount() const
{
	return this->_postsCount;
}


PaidUser::PaidUser(const int id, const std::string& login, const std::string& password, 
	Post* posts, const int postsCount) : User(id, login, password)
{
	this->SetPosts(posts, postsCount);
}


PaidUser::PaidUser(const int id, const std::string& login, const std::string& password)
	: PaidUser(id, login, password, nullptr, 0)
{}