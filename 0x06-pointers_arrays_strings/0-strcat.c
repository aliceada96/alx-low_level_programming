#include "main.h"

/**
 * _strcat - concatenates two strings
 * @src: source string to be appende
 * @dest: destination string
 *
 * Return: string
 */

char *_strcat(char *dest, char *src)
{
	int b;
	int end = 0;

	while (dest[end] != '\0')
	{
		end++;
	}
	for (b = 0; src[b] != '\0'; b++)
	{
		dest[end + b] = src[b];
	}
	return (dest);
}
