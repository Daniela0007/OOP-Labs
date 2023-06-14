#include "Forme.h"

void Forme::Add(Forma* f)
{
	forme.push_back(f);
}

void Forme::Paint()
{
	for (int i = 0; i < forme.size(); i++)
		forme[i]->Paint();
}
