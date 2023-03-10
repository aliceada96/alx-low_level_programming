#include "main.h"

/**
 * _strpbrk - searches a string for any setof bytes
 * @s: reference string
 * @accept: contains bytes being located in string s
 * Return: pointer to the byte in s that matches one of the bytes in accept,
 * Null idf not present
 *
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
