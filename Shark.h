#pragma once
#include "Animal.h"
class Shark : public Animal
{
	string GetName()
	{
		string name = "Shark";
		return name;
	}
	bool isAFish()
	{
		return 1;
	}
	bool isABird()
	{
		return 0;
	}
	bool isAMammal()
	{
		return 0;
	}
};