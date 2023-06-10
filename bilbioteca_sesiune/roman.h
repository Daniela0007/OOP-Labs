#pragma once
#include <string>
#include "carte.h"
using namespace std;
class Roman : public Carte
{
	string nume;
	string autor;
public:
	Roman(string nume, string autor);
	string GetInfo();
};

