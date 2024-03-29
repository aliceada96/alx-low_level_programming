#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: pointer to a string of 1s and 0s
 *
 * Return: converted int, else 00 if b is Null  or has chars
 * that are not 0s and 1s
 */

unsigned int binary_to_uint(const char *b)
{
	int count;
	unsigned int i = 0;

	if (b == NULL)
		return (0);

	for (count = 0; b[count] != '\0'; count++)
	{
		if (b[count] == '0')
		{
			i = i << 1;
		}
		else if (b[count] == '1')
		{
			i = i << 1 | 1;
		}
		else
		{
			return (0);
		}

	}

	return (i);
}
