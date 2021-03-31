#include "Teacher.h"


Teacher::Teacher(const std::string& firstName, const std::string& middleName,
	const std::string& surname, std::string& post) :
	Person(firstName, middleName, surname)
{
	this->SetPost(post);
}


void Teacher::SetPost(const std::string& post)
{
	this->_post = post;
}


const std::string& Teacher::GetPost() const
{
	return this->_post;
}
