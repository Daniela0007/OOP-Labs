#include "roman.h"

Roman::Roman(string nume, string autor)
{
	this->nume = nume;
	this->autor = autor;
}

string Roman::GetInfo()
{
	string ans;
	ans.append("Roman ");
	ans.append(nume);
	ans.append(" de ");
	ans.append(autor);

	return ans;
}
