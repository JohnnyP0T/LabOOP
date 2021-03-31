#include <exception>

#include "CertificateDiscount.h"


CertificateDiscount::CertificateDiscount(const double amount, const CategoryType category)
	: DiscountBase(category)
{
	this->SetAmount(amount);
}


void CertificateDiscount::SetAmount(const double amount)
{
	const double maxValue = 10000.0;
	if (amount < 0)
	{
		throw std::exception("Размер сертификата меньше нуля.");
	}
	if (amount > maxValue)
	{
		throw std::exception("Размер сертификата больше допустимого значения.");
	}
	this->_amount = amount;
}


double CertificateDiscount::GetAmount() const
{
	return this->_amount;
}


double CertificateDiscount::Calculate(Product& product)
{
	if (product.GetCategory() != this->GetCategory())
	{
		return product.GetCost();
	}
	if (product.GetCost() - this->GetAmount() <= 0)
	{
		this->SetAmount(this->GetAmount() - product.GetCost());
		return 0;
	}
	const double newCost = product.GetCost() - this->GetAmount();
	this->SetAmount(0);
	return newCost;
}