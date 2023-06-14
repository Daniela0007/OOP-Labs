#include "Dacia.h"

void Dacia::setCapacitate(int capacity)
{
	capacitate = capacity;
}

void Dacia::setCuloare(string color)
{
	culoare = color;
}

int Dacia::getCapacitate()
{
	return capacitate;
}

string Dacia::getCuloare()
{
	return culoare;
}

string Dacia::getName()
{
	return "Dacia";
}
