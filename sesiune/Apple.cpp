#include "Apple.h"

Apple::Apple(int price, int quantity, string origin)
{
	this->price = price;
	this->quantity = quantity;
	this->origin = origin;
}

string Apple::GetType()
{
	return "Apple";
}

int Apple::GetQuantity()
{
	return quantity;
}

int Apple::GetPrice()
{
	return price;
}

void Apple::Print()
{
	string s;
	s.append("(from=");
	s.append(origin);
	s.append(")");
	std::cout << "Apple " << s << " Price=" << price << " Quantity=" << quantity << endl;
}
