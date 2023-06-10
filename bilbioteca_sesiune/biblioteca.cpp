#include "biblioteca.h"
#include <iostream>
Biblioteca::Biblioteca()
{
	count = 0;
}

Biblioteca::~Biblioteca()
{
	//delete[] lista;
}

Biblioteca& Biblioteca::operator+=(Carte* c)
{
	// TODO: insert return statement here
	lista[count++] = c;
	return *this;
}

Carte** Biblioteca::begin()
{
	return &lista[0];
}

Carte** Biblioteca::end()
{
	return &lista[count];
}

Biblioteca::operator int()
{
	return count;
}

void Biblioteca::PrintFilter(bool(*filter)(Carte* c))
{
	for (int i = 0; i < count; i++)
		if (filter(lista[i]))
			std::cout << lista[i]->GetInfo() << std::endl;
}

void Biblioteca::print()
{
	for (int i = 0; i < count; i++)
		cout << lista[i]->GetInfo() << "\n";
}
