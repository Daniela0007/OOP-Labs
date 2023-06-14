#include "Food.h"

void Food::setQuantity(float quantity)
{
	this->quantity = quantity;
}

string Food::getInfo()
{
	
		string info, number;
		info.append(name);
		info.append(" : ");
		number = to_string(quantity);
		info.append(number);
		info.append(" kg; ");
		return info;

}
