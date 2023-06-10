#include "revista.h"

Revista::Revista(string titlu, int nrArticole)
{
	this->titlu = titlu;
	this->nrArticole = nrArticole;
}

string Revista::GetInfo()
{
	string ans, number;
	number = to_string(nrArticole);
	ans.append("Revista ");
	ans.append(titlu);
	ans.append(" cu ");
	ans.append(number);
	ans.append(" de articole");
	return ans;
}
