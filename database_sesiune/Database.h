#pragma once
#include <iostream>
#include <vector>
using namespace std;
#include "Entry.h"

class Database
{
private:
	vector <Entry*> entries;
public :
	Database& operator += (Entry *);
	void operator -= (string);
	vector<Entry*>::iterator begin()
	{
		return entries.begin();
	}

	vector<Entry*>::iterator end()
	{
		return entries.end();
	}

	void Print();
};