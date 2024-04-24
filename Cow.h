#pragma once
#include "Animal.h"
class Cow : public Animal{
	string GetName()
	{
		string name = "Cow";
		return name;
	}
	bool isAFish()
	{
		return 0;
	}
	bool isABird()
	{
		return 0;
	}
	bool isAMammal()
	{
		return 1;
	}
};