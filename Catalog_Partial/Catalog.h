#pragma once
#include "Student.h"
class Catalog
{
private:
	int last;
	int size;
	Student** students_;
public :
	Catalog(int Initital_size = 10);
	~Catalog();
	void operator+= (const char*);
	Student& operator[] (const char*);
	Student& operator[] (int index);
	int GetCount();
	
};

