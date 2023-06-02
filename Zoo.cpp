#include "Zoo.h"

vector<Animal*> Zoo::GetFishes()
{
	vector <Animal*> fishes;
	for (auto i : animals)
		if (i->isAFish() == 1)
			fishes.push_back(i);
	return fishes;
}

vector<Animal*> Zoo::GetBirds()
{
	vector <Animal*> birds;
	for (auto i : animals)
		if (i->isABird() == 1)
			birds.push_back(i);
	return birds;
}

vector<Animal*> Zoo::GetMammals()
{
	vector<Animal*> mammal;
	for (auto i : animals)
		if (i->isAMammal() == 1)
			mammal.push_back(i);
	return mammal;
}

vector<Feline*> Zoo::GetFelines()
{
	vector<Feline*> feline;
	for (auto i : animals)
		if (i->GetName() == "Lion" || i->GetName() == "Tiger")
			feline.push_back((Feline*)i);
	return feline;
}

int Zoo::GetTotalAnimals()
{
	return animals.size();
}

void Zoo::operator+=(Animal* newAnimal)
{
	animals.push_back(newAnimal);
}

bool Zoo::operator()(string name)
{
	for (auto i : animals)
		if (i->GetName() == name)
			return true;
	return false;
}
