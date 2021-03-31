#pragma once

#include "DiscountBase.h"
#include "Product.h"

/// @brief Вовод товара и расчет скидки.
/// @param discount Указатель на базовый класс скидки.
/// @param products Товары.
/// @param productsCount Количество товаров.
void ShowCheckWithDiscount(DiscountBase* discount, Product** products,
    int productsCount);
