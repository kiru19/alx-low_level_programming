#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	char tmp;
	int i, kiru, kiru1;

	kiru = 0;
	kiru1 = 0;

	while (s[kiru] != '\0')
	{
		kiru++;
	}

	kiru1 = kiru - 1;
	for (i = 0; i < kiru / 2; i++)
	{
		tmp = s[i];
		s[i] = s[kiru1];
		s[kiru1--] = tmp;
	}
}
