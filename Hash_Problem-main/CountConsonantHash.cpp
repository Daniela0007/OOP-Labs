#include "CountConsonantHash.h"

CountConsonantHash::CountConsonantHash()
{
	nume_hash = "CountConsonantssHash";
	nr_consonants = 0;
}

int CountConsonantHash::compute(const char* string)
{
	int len = 0;
	while (string[len] != '\0')
	{
		if (string[len] != 'A' && string[len] != 'O' && string[len] != 'E' &&
			string[len] != 'I' && string[len] != 'U' && string[len] != 'Y' &&
			string[len] != 'o' && string[len] != 'u' && string[len] != 'i' &&
			string[len] != 'a' && string[len] != 'y' && string[len] != 'e' &&
			string[len] != 'Y' && string[len] != ' ')
			nr_consonants++;
		len++;
	}
	return nr_consonants;
}
