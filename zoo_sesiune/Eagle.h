#pragma once
#include "Animal.h"
class Eagle: public Animal {
public:
	string GetName()
	{
		string name = "Eagle";
		return name;
	}
	bool isAFish()
	{
		return 0;
	}
	bool isABird()
	{
		return 1;
	}
	bool isAMammal()
	{
		return 0;
	}
};