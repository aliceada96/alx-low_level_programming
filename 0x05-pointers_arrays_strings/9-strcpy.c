#include "main.h"

/**
 * _strcpy - copies the string pointed to by src to dest
 * @dest: destination
 * @src: source
 * Return: char copy of string
 */
char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; *(src + a) != '\0'; a++)
	{
		dest[a] = *(src + 1);
	}
	dest[a] = '\0';

	return (dest);
}
