#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string
 *
 */

void rev_string(char *s)
{
	char *b;
	char *e;
	char temp;

	b = s;
	e = s;

	while (*e != '\0')
	{
		e++;
	}
	e--;
		while (e > b)
		{
			temp = *b;
			*b = *e;
			*e = temp;

			c--;
			b++;
		}
}
