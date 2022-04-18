#include "main.h"

/**
 * puts2 - prints one char out of 2 of a string
 * followed by a new line
 * @str: string to print the chars from
 */
void puts2(char *str)
{
	int kiru, i;

	kiru = 0;

	while (str[kiru] != '\0')
	{
		kiru++;
	}
	for (i = 0; i < kiru; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
