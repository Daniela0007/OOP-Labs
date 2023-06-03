#include "StringData.h"
#include <iostream>

StringData::StringData(string name, string value) : Entry(name)
{
	this->value = value;
}

void StringData::Add(string toAdd)
{
	//value = toAdd ;
	value.append(toAdd);
}

bool StringData::Substract(int toSubstract)
{
	if (toSubstract > value.size()) {
		std::cout << "StringData: len(" << value << ")" << " < " << toSubstract << endl;
		return false;
	}
	value.erase(value.size() - toSubstract);
	return true;
}

void StringData::Print()
{
	std::cout << name << " = " << value;
}
