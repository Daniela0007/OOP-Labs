#pragma once
#include "Article.h"
#include <string>
#include <iostream>
using namespace std;
class Apple : public Article
{
	string name = "Apple";
	int price;
	int quantity;
	string origin;
public:
	 Apple(int price, int quantity, string origin);
	 string GetType();
	 int GetQuantity();
	 int GetPrice();
	 void Print();
};

