#include <iostream>

#include "ShowCheckWithDiscount.h"
#include "PercentDiscount.h"


void ShowCheckWithDiscount(DiscountBase* discount, Product** products, 
	const int productsCount)
{
	double allCost = 0;
	for (int i = 0; i < productsCount; i++)
	{
		std::cout << products[i]->GetName() << '\t' << "Old cost: "
			<< products[i]->GetCost() << '\t';
		double newCost = discount->Calculate(*products[i]);
		std::cout << "New cost: " << newCost << std::endl;
		allCost += newCost;
	}
	std::cout << "Full Cost with Discount: " << allCost << std::endl;
}