#pragma once
#include "Forma.h"
class Dreptunghi : public Forma
{
protected:
	int x;
	int y;
	int lungime, latime;
public:
	void set(int x, int y, int lungime,int latime);
	//void Paint();
};

