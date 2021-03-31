#pragma once

#include  "DiscountBase.h"
#include "CategoryType.h"

/// @brief Процентная скидка.
class PercentDiscount : public DiscountBase
{
private:

	/// @brief Размер скидки(в процентах).
	double _percent;

public:

	/// @brief Сетер размера скидки.
	/// @param percent Размер скидки.
	void SetPercent(double percent);

	/// @brief Гетер размера скидки.
	/// @return Размер скидки.
	double GetPercent() const;

	/// @brief Конструктор.
	/// @param percent Размер скидки.
	/// @param category Категория.
	PercentDiscount(double percent, CategoryType category);

	/// @brief Расчет скидки.
	/// @param product Продукт.
	/// @return Сумма со скидкой.
	double Calculate(Product& product) override;
};

