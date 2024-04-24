#pragma once
#include "Feline.h"
class Tiger : public Feline {
	string GetName()
	{
		string name = "Tiger";
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
		return 80;
	}
};