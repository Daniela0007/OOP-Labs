#include "Shop.h"
#include <iostream>

Shop& Shop::Add(Article * newItem)
{
	items.push_back(newItem);
	return *this;
}

int Shop::GetTotalPrice()
{
	int sum = 0;
	for (int i = 0; i < items.size(); i++)
		sum += items[i]->GetPrice() * items[i]->GetQuantity();
	return sum;
}

int Shop::GetQuantity(string name)
{
	int cnt = 0;
	for (int i = 0; i < items.size(); i++)
		if (items[i]->GetType() == name)
			cnt+= items[i]->GetQuantity();
	return cnt;
}

void Shop::List()
{
	for (int i = 0; i < items.size(); i++)
		items[i]->Print();
}
