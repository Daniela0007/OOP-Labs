#pragma once
#include "masina.h"
#include <string>
using namespace std;
class FerrariRosu : public Masina
{
public:
	string GetColor()
	{
		return "rosu";
	}
	string GetName()
	{
		return "Ferrari";
	}
};