#include <exception>

#include "PercentDiscount.h"


PercentDiscount::PercentDiscount(const double percent, const CategoryType category)
	:DiscountBase(category)
{
	this->SetPercent(percent);
}


void PercentDiscount::SetPercent(const double percent)
{
	if (percent < 0 || percent>100)
	{
		throw std::exception("Некорректное значение");
	}
	this->_percent = percent;
}


double PercentDiscount::GetPercent() const
{
	return this->_percent;
}


double PercentDiscount::Calculate(Product& product)
{
	const double allCost = 100.0;
	if (product.GetCategory() == this->GetCategory())
	{
		return (product.GetCost() * (allCost - this->GetPercent())
			/ allCost);
	}
	return product.GetCost();
}