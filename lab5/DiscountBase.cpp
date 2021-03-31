#include "DiscountBase.h"


DiscountBase::DiscountBase(const CategoryType category)
{
	this->SetCategory(category);
}


void DiscountBase::SetCategory(const CategoryType category)
{
	this->_category = category;
}


CategoryType DiscountBase::GetCategory() const
{
	return this->_category;
}
