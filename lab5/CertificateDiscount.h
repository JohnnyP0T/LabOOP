#pragma once

#include "DiscountBase.h"
#include "CategoryType.h"

/// @brief Скидка по сертификату.
class CertificateDiscount : public DiscountBase
{
private:

	/// @brief Размер сертификата(в рублях).
	double _amount;

public:

	/// @brief Сетер размера сертификата.
	/// @param amount Размер сертификата.
	void SetAmount(double amount);

	/// @brief Гетер Размера сертификата.
	/// @return Размер Сертификата.
	double GetAmount() const;

	/// @brief Конструктор.
	/// @param amount Размер сертификата.
	/// @param category Категория.
	CertificateDiscount(double amount, CategoryType category);

	/// @brief Расчет стоимости товара по сертификату.
	/// @param product Продукт.
	/// @return Итоговая сумма вместе с сертификатом.
	double Calculate(Product& product) override;
};

