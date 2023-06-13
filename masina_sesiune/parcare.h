#pragma once
#include "masina.h"
#include <iostream>
#include <vector>
class Parcare
{
private:
	Masina** lista;
	int cnt;
	int maxi;
public:
	void Create(int maxCapacity)
	{
		lista = new Masina * [maxCapacity];
		for (int i = 0; i < maxCapacity; i++)
			lista[i] = 0;
		cnt = 0;
		maxi = maxCapacity;
	}
	bool Add(Masina* masina)
	{
		if (cnt == maxi)
			return false;
		else {
			lista[cnt++] = masina;
			return true;
		}
		
	}
	void RemoveByName(string name)
	{
		Masina** newList = new Masina * [maxi];
		int count = 0;
		for (int i = 0; i < cnt; i++)
			if (lista[i]->GetName() != name)
				newList[count++] = lista[i];
		delete[] lista;
		lista = newList;
		cnt = count;
	}
	bool IsFull()
	{
		if (maxi == cnt) return true;
		return false;
	}
	void ShowAll()
	{
		std::cout << "SHOW-ALL:";
		for (int i = 0; i < cnt; i++)
			std::cout << lista[i]->GetName() << "(" <<
			lista[i]->GetColor() << "), ";
		std::cout << endl;
	}
	int GetCount()
	{
		return cnt;
	}
	void ShowByColor(string color)
	{
		std::cout << "SHOW-COLOR (" << color << ") :";
		for (int i = 0; i < cnt; i++)
			if (lista[i]->GetColor() == color) {
				std::cout << lista[i]->GetName() << ", ";
			}
		std::cout << endl;
	}
};