#include "EasyHash.h"

EasyHash::EasyHash()
{
	nume_hash = "EasyHash";
	sum_ascii_special = 0;
}

int EasyHash::compute(const char* string)
{
	const char* vocale = "AEIUOYaeuioy";
	int len = 0;
	bool vowel = 0;
	while (string[len] != '\n')
	{
		for (int i = 0; i < 12; i++)
			if (string[i] == vocale[i])
			{
				sum_ascii_special += (int)string[i] * 10;
				vowel = 1;
			}
			else break;
		if (string[len] == ' ') sum_ascii_special += (int)string[len] * 12;
		else if (vowel == 0) sum_ascii_special += (int)string[len] * 11;
		len++;
	}
	return sum_ascii_special;
}
