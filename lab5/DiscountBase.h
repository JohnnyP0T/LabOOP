#pragma once

#include "CategoryType.h"
#include "Product.h"

/// @brief Скидка.
class DiscountBase
{
private:

	/// @brief Категория.
	CategoryType _category;

private:

	/// @brief Сетер категории.
	/// @param category Категория.
	void SetCategory(CategoryType category);

public:

	/// @brief Гетер категории.
	/// @return Категория.
	CategoryType GetCategory() const;

	/// @brief Расчет суммы после скидки.
	/// @param product Продукт.
	/// @return Цена.
	virtual double Calculate(Product& product) = 0;

protected:

	/// @brief Конструктор.
	/// @param category Категория.
	DiscountBase(CategoryType category);
};

