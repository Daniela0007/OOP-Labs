#pragma once
#include <string>
#include "carte.h"
using namespace std;
class Revista : public Carte
{
	string titlu;
	int nrArticole;
public:
	Revista(string titlu, int nrArticole);
	string GetInfo();
};

