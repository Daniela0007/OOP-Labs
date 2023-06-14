#include "ShoppingList.h"

void ShoppingList::addItem(Item* i)
{
	lista.push_back(i);
}

void ShoppingList::printList()
{
	for (auto i : lista)
	{
		std::cout << i->getInfo();
	}

}
