#pragma once
#include "Forma.h"
#include <iostream>
class Cerc : public Forma
{
	int x;
	int y;
	int raza;
public:
	void set(int x, int y, int raza);
	void Paint();
};

