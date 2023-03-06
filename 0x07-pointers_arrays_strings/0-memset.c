#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to a memory area
 * @b: byte to be filled at s
 * @n: number of bytes to be filled at s
 *
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *mem = s;
	char value = b;

	for (i = 0; i < n; i++)
		mem[i] = value;

	return (mem);
}
