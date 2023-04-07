#include "Catalog.h"

Catalog::Catalog(int size)
{
	this->last = 0;
	this->students_ = new Student*[size];
	this->size = size;
}

Catalog::~Catalog()
{
	for (int i = 0; i < size; i++)
		delete students_[i];
	delete[] students_;
}

void Catalog::operator+=(const char* name)
{

	if (last == size) {
		Student** newStudents = new Student * [size * 2];
		for (int i = 0; i < size; i++)
		{
			newStudents[i] = students_[i];
			students_[i] = nullptr;
		}
		size *= 2;
		delete[] students_;
		students_ = newStudents;
	}

	students_[last++] = new Student(name);

}

Student& Catalog::operator[](const char* name)
{
	for (int i = 0; i < last; i++)
	{
		if (students_[i]->GetName() == name)
			return *students_[i];
	}
}

Student& Catalog::operator[](int index)
{
	return *students_[index];
}

int Catalog::GetCount()
{
	return last;
}


