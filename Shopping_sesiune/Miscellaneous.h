#pragma once
#include "Item.h"
#include <iostream>
#include <string>
using namespace std;

class Miscellaneous : public Item
{
	int count;
public:
	string getInfo();
	void setCount(int count);
};

