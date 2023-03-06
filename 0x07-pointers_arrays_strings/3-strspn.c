#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: reference string
 * @accept: Has specific substring whose bytes are reurned if its the same as
 * the initial substring of s
 * Return: number of bytes in accept present in s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int prefix;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				prefix++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (prefix);
		}
		s++
	}
	return (prefix);
}
