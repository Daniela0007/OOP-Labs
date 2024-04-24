#pragma once
#include "Feline.h"
class Lion : public Feline
{
	string GetName()
	{
		string name = "Lion";
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
	int GetSpeed()
	{
		return 60;
	}
};