#pragma once
#include <iostream>
#include <string>
//#include "ShoppingList.h"
using namespace std;
class Item
{
protected:
	//ShoppingList s;
	string name;
public:
	string getName();
	virtual string getInfo() = 0;
	void setName(string name);
};

