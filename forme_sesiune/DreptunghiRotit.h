#pragma once
#include "Dreptunghi.h"
#include <iostream>
class DreptunghiRotit : public Dreptunghi
{
	int unghi;
public:
	void set(int x, int y, int lungime, int latime,int unghi);
	void Paint();
};

