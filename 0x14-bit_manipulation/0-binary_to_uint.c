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
	unsigned int i;

	if (b == NULL)
		return (0);

	for (count = 0; b[count] != '\0'; count++)
	{
		if (b[count] != '0' && b[count] != '1')
		{
			return (0);
		}
		else
		{
			i = (i << 1) | (b[i] - '0');
		}
	}

	return (i);
}

