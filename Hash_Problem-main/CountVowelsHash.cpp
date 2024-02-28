#include "CountVowelsHash.h"

CountVowelsHash::CountVowelsHash()
{
	nume_hash = "CountVowelsHash";
	nr_vowels = 0;
}

int CountVowelsHash::compute(const char* string)
{
	const char* vocale = "AEIUOYaeuioy";
	int len = 0;
	while (string[len] != '\n')
	{
		for (int i = 0; i < 12; i++)
			if (string[i] == vocale[i])
			{
				nr_vowels++;
			}
			else break;
		len++;
	} 
	return nr_vowels;
}
