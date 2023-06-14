#pragma once
#include "Item.h"
#include <vector>
#include <iostream>
using namespace std;

class ShoppingList
{
	vector <Item*> lista;
public:
	void addItem(Item*);
	void printList();
};

