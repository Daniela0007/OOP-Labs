#include "Database.h"
#include <iostream>
Database& Database::operator+=(Entry* toAdd)
{
	entries.push_back(toAdd);
	return *this;
}

void Database::operator-=(string minus)
{
	for (int i = 0; i < entries.size(); i++)
		if (entries[i]->GetName() == minus)
		{
			entries[i] = nullptr;
			entries.erase(entries.begin() + i);
		}
}


void Database::Print()
{
	for (auto i : entries)
	{
		i->Print();
		std::cout << ";";
	}
	std::cout << endl;
}
