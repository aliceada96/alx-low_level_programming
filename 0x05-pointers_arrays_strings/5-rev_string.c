#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string
 *
 * Return: void
 */

void rev_string(char *s)
{
	int j, half, max;
	char start, end;

	j = 0;

	while (s[j] != '\0')
	{
		j++;
	}
	max = j - 1;
	half = max / 2;

	while (half >= 0)
	{
		start = s[max - half];
		end = s[half];
		s[half] = first;
		s[max - half] = end;
		half--;
	}
}
