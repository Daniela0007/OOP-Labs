#pragma once
#include "SUV.h"
class RangeRover : public SUV
{
	int consum;
public:
	void setConsum(int);
	int getConsum();
	string getName();
};
