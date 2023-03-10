#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: where copied bytes are stored
 * @src: memory area rom which bytes are copies
 * @n: number of bytes to be copied from source to dest
 * Return: pointer to destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *destination = dest;
	char *source = src;

	for (i = 0; i < n; i++)
		destination[i] = source[i];

	return (dest);
}
