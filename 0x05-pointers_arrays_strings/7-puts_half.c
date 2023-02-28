#include "main.h"

/**
 * puts_half - prints the second half of a string followed by a newline
 * @str: string
 */


void puts_half(char *str)
{
	int i, len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		for (i = len / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}

	else
	{
		int n = (len - 1) / 2;

		for (i = n + 1; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}

	_putchar('\n');
}
