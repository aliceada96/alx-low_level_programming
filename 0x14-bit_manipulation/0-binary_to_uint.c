#include "main.h"

/**
 * binary_to_uint - converts a binary no to unsigned int
 * @b: pointer to a string of 1s and 0s
 *
 * Return: converted int, else 0 if b is null or contains chars tat are not
 * 0s and 1s
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	unsigned int product = 1;
	int count;

	if (b == '\0')
		return (0);

	for (count = 0; b[count];)
		count++;

	for (count -= 1; count >= 0; count--)
	{
		if (b[count] != '1' && b[count] != '0')
			return (0);

		i += (b[count] - '0') * product;
		product *= 2;
	}

	return (i);
}
