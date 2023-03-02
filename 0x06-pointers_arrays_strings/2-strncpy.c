#include  "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: string to be appended on dest
 * @n: number of bytes from src
 *
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = stc[i];
	}
	for ( ; i < n; i++)
	{
		dest[i]  = '\0';
	}
	return (dest);
}
