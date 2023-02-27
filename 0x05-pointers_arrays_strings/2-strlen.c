#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string being examined
 *
 * Returns: length of string
 */
int_strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}

