#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string being examined
 *
 * Returns: length of string
 */
int _strlen(char *s)
{
	int a = 0;

	while (*s != '\0')
	{
		a++;
		s++;
	}
	return (a);
}

