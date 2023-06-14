#include "Miscellaneous.h"

string Miscellaneous::getInfo()
{
	string info, number;
	info.append(name);
	info.append(" : ");
	number = to_string(count);
	info.append(number);
	info.append(" items; ");
	return info;
}

void Miscellaneous::setCount(int count)
{
	this->count = count;
}
