#pragma once
#include <iostream>
#include <string>
#include "MasinaOras.h"
using namespace std;
class Opel : public MasinaOras
{
	int capacitate;
	string culoare;
	int anFabricatie;
public:
	void setCapacitate(int);
	void setCuloare(string);
	void setAnFabricatie(int);
	int getAnFabricatie();
	int getCapacitate();
	string getCuloare();
	string getName();
};

