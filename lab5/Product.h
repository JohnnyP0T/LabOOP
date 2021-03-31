#pragma once

#include <string>

#include "CategoryType.h"

/// @brief Продукт.
class Product
{
private:

	/// @brief Название.
	std::string _name;

	/// @brief Категория.
	CategoryType _category;

	/// @brief Цена.
	double _cost;

public:

	/// @brief Сетер названия.
	/// @param name Название.
	void SetName(const std::string& name);

	/// @brief Сетер категории.
	/// @param type Категория.
	void SetCategory(CategoryType type);

	/// @brief Сетер цены.
	/// @param cost Цена.
	void SetCost(double cost);

	/// @brief Гетер Названия.
	/// @return Название.
	const std::string& GetName() const;

	/// @brief Гетер категории.
	/// @return Категория.
	CategoryType GetCategory() const;

	/// @brief Гетер цены.
	/// @return Цена.
	double GetCost() const;

	/// @brief Конструктор.
	/// @param name Название.
	/// @param type Категория.
	/// @param cost Цена.
	Product(const std::string& name, CategoryType type, double cost);
};

