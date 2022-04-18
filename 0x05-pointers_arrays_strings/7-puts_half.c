#include "main.h"

/**
 * puts_half - prints half of a string
 *followed by a new line
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int kiru, n, i;

	kiru = 0;

	while (str[kiru] != '\0')
	{
		kiru++;
	}

	if (kiru % 2 == 0)
	{
		for (i = kiru /2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	} else if (kiru % 2)
	{
		for (n = (kiru - 1) / 2; n < kiru - 1; n++)
		{
			_putchar(str[n + 1]);
		}
	}
	_putchar('\n');
}
