#pragma once
#include "Forma.h"
#include <vector>
using namespace std;
class Forme : public Forma
{
	vector <Forma*> forme;
public:
	void Add(Forma*);
	void Paint();
};

