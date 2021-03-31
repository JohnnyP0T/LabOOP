#include <exception>

#include "Product.h"


Product::Product(const std::string& name, const CategoryType type, const double cost)
{
	this->SetName(name);
	this->SetCategory(type);
	this->SetCost(cost);
}


void Product::SetName(const std::string& name)
{
	this->_name = name;
}


void Product::SetCategory(const CategoryType type)
{
	this->_category = type;
}


void Product::SetCost(const double cost)
{
	const double maxCost = 100000.0;
	if (cost < 0)
	{
		throw std::exception("Цена меньше нуля");
	}
	if (cost > maxCost)
	{
		throw std::exception("Цена больше допустимого значения");
	}
	this->_cost = cost;
}


const std::string& Product::GetName() const
{
	return this->_name;
}


CategoryType Product::GetCategory() const
{
	return this->_category;
}


double Product::GetCost() const
{
	return this->_cost;
}
