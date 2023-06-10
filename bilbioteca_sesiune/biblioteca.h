#pragma once
#include "carte.h"
class Biblioteca
{
	int count;
	Carte* lista[100];
public:
	Biblioteca();
	~Biblioteca();
	Biblioteca& operator +=(Carte* c);
    Carte** begin();
    Carte** end();
	operator int();
	void print();
	void PrintFilter(bool (*filter)(Carte * c));
};

