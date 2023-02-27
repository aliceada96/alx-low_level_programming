#include "main.h"

/**
 * puts_half - prints the second half of a string followed by a newline
 * @str: string
 */


void puts_half(char *str)
{
	int a, b, end;

	a = 0;
	b = 0;

	while (str[a++])
	{
		b++;
	}

	if ((b % 2) == 0)
	{
		end = b / 2;
	}

	else
	{
		end = (b + 1) / 2;

		for (a = n; a < b; a++)
			_putchar(str[a]);
	}
	_putchar('\n');
}
