#pragma once
#include <iostream>
#include "MasinaOras.h"
#include <string>
using namespace std;
class Dacia : public MasinaOras
{
	int capacitate;
	string culoare;
public:
	void setCapacitate(int);
	void setCuloare(string);
	int getCapacitate();
	string getCuloare();
	string getName();
};

