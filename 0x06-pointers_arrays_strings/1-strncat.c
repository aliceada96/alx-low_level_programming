#include "main.h"

/**
 * _strncat - concatenates two strings uses at most n bytes fron src
 * @dest: destination string
 * @src: source string
 * @n: number of bytes used from source string
 *
 * Return: pointer to resulting dest string
 */

char *_strncat(char *dest, char *src, int n)
{
	int b = 0;
	int end;

	while (dest[b] != '\0')
	{
		b++;
	}
	for (end = 0; end < n && src[end] != '\0'; end++)
	{
		dest[end + b] = src[end];
	}
	dest[end + b] = '\0';

	return (dest);
}
