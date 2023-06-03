#include "IntegerData.h"
#include <iostream>
IntegerData::IntegerData(string name, string value) : Entry(name)
{
	//conversie la int
	int number = 0;
	for (int i = 0; i < value.size(); i++)
		number = number * 10 + (value[i] - '0');

	this->value = number;
}

void IntegerData::Add(string toAdd)
{
	int number = 0;
	for (int i = 0; i < toAdd.size(); i++)
		number = number * 10 + (toAdd[i] - '0');
	this->value += number;
}

bool IntegerData::Substract(int toSubstract)
{
	if (value - toSubstract < 0)
		return false;
	value -= toSubstract;
	return true;
}
void IntegerData::Print()
{
	std::cout << name << " = " << value;
}