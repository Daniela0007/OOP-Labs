#pragma once
#include "masina.h"
#include <string>
using namespace std;
class Toyota : public Masina
{
private:
	string color;
public:
	Toyota(string color) { this->color = color; }
	string GetColor()
	{
		return color;
	}
	string GetName()
	{
		return "Toyota";
	}
};