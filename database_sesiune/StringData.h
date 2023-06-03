#pragma once
#include <string>
#include "Entry.h"
using namespace std;
class StringData : public Entry
{
private:
	string value;
public:
	StringData(string name, string value );
	void Add(string toAdd);
	bool Substract(int toSubstract);
	void Print();
};