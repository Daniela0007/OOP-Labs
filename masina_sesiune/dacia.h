#pragma once
#include "masina.h"
#include <string>
using namespace std;
class Dacia : public Masina
{
private:
	string color;
public:
	Dacia(string color) { this->color = color; }
	string GetColor()
	{
		return color;
	}
	string GetName()
	{
		return "Dacia";
	}
};