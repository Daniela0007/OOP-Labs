#pragma once
#include "Article.h"
#include <vector>
#include <string>
using namespace std;
class Shop
{
	vector <Article*> items;
public:
	Shop& Add(Article * newItem);
	int GetTotalPrice();
	int GetQuantity(string name);
	void List();
};

