#pragma once
#include <string>
#include "Entry.h"
using namespace std;
class IntegerData : public Entry
{
private:
	int value;
public:
	IntegerData(string name, string value);
	void Add(string toAdd);
	bool Substract(int toSubstract);
	void Print();
};